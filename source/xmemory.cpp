// -*- C++ -*-

/*
  Copyright (C) 2011 University of Massachusetts Amherst.

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*/

/*
 * @file   xmemory.cpp
 * @brief  Memory management for all.
 * @author Tongping Liu <http://www.cs.umass.edu/~tonyliu>
 */ 
#include "xrun.h"
#include "xmemory.h"
#include "mm.h"

xpheap<xoneheap<xheap > > xmemory::_pheap;
 
// This function is called inside the segmentation fault handler
// So we must utilize the "context" to achieve our target 
void xmemory::handleSegFault()
{
#ifdef DETECT_OVERFLOW
  DEBUG("Returning from segmentation fault error\n"); 
  // Check whether the segmentation fault is called by buffer overflow.
  if(xmemory::getInstance().checkHeapOverflow()) {
    // Now we can roll back 
    DEBUG("\n\nOVERFLOW causes segmenation fault!!!! ROLLING BACK\n\n\n");
    
    xrun::getInstance().rollback();
  }  
  else {
    DEBUG("\n\nNO overflow in segmenation fault, ROLLING BACK and stop\n\n\n");
    // We may rely on gdb to find out this problem.
    // We do not need to install watchpoints at all.
    // But we can rollback everything and hault there
    // so gdb can be used to attach to this process.
    xrun::getInstance().rollbackandstop();
  }
#else 
  xrun::getInstance().rollbackandstop();
#endif
}
 
void xmemory::cleanupFreeList() {
  freelist::getInstance().postFreeAllObjects(); 
}
 
void xmemory::freeAllObjects()
{
  freelist::getInstance().preFreeAllObjects(); 
  struct freeObject * obj = NULL;

  while ((obj = freelist::getInstance().retrieveFreeObject())) {
    _pheap.realfree(obj->ptr, obj->owner);
  }
 
  freelist::getInstance().postFreeAllObjects(); 
//  _pheap.realfree(ptr, tindex);
}

void xmemory::realfree(void * ptr) {
  _pheap.realfree(ptr);
}

void * InternalHeapAllocator::malloc (size_t sz) {
  return InternalHeap::getInstance().malloc(sz);
}

void InternalHeapAllocator::free (void * ptr) {
  return InternalHeap::getInstance().free(ptr);
}

void * InternalHeapAllocator::allocate(size_t sz) {
  return InternalHeap::getInstance().malloc(sz);
}

void InternalHeapAllocator::deallocate (void * ptr) {
  return InternalHeap::getInstance().free(ptr);
}


