#include "real.hh"

#include <dlfcn.h>

#define DEFINE_WRAPPER(name) decltype(::name) * name;

#define INIT_WRAPPER(name, handle) name = (decltype(::name)*)dlsym(handle, #name);

namespace Real {
// No libc wrappers
// DEFINE_WRAPPER(getdents);
// DEFINE_WRAPPER(modify_ldt);
// DEFINE_WRAPPER(uselib);
// DEFINE_WRAPPER(sysfs);
// DEFINE_WRAPPER(gettid);
// DEFINE_WRAPPER(tkill);
// DEFINE_WRAPPER(set_thread_area);
// DEFINE_WRAPPER(get_thread_area);
// DEFINE_WRAPPER(io_setup);
// DEFINE_WRAPPER(io_destroy);
// DEFINE_WRAPPER(io_getevents);
// DEFINE_WRAPPER(io_submit);
// DEFINE_WRAPPER(io_cancel);
// DEFINE_WRAPPER(lookup_dcookie);
// DEFINE_WRAPPER(sys_tgkill);
// DEFINE_WRAPPER(mq_getsetattr);
// DEFINE_WRAPPER(ioprio_get);
// DEFINE_WRAPPER(ioprio_set);
// DEFINE_WRAPPER(get_robust_list);
// DEFINE_WRAPPER(set_robust_list);
// DEFINE_WRAPPER(pivot_root);
// DEFINE_WRAPPER(arch_prctl);
// DEFINE_WRAPPER(futex);
// DEFINE_WRAPPER(set_tid_address);
// DEFINE_WRAPPER(restart_syscall);
// DEFINE_WRAPPER(exit_group);
// DEFINE_WRAPPER(add_key);
// DEFINE_WRAPPER(request_key);
// DEFINE_WRAPPER(keyctl);
// DEFINE_WRAPPER(move_pages);
// DEFINE_WRAPPER(kexec_load);

DEFINE_WRAPPER(accept);
DEFINE_WRAPPER(access);
DEFINE_WRAPPER(acct);
DEFINE_WRAPPER(adjtimex);
DEFINE_WRAPPER(alarm);
DEFINE_WRAPPER(bind);
DEFINE_WRAPPER(brk);
DEFINE_WRAPPER(chdir);
DEFINE_WRAPPER(chmod);
DEFINE_WRAPPER(chown);
DEFINE_WRAPPER(chroot);
DEFINE_WRAPPER(clock_getres);
DEFINE_WRAPPER(clock_gettime);
DEFINE_WRAPPER(clock_nanosleep);
DEFINE_WRAPPER(clock_settime);
DEFINE_WRAPPER(clone);
DEFINE_WRAPPER(close);
DEFINE_WRAPPER(closedir);
DEFINE_WRAPPER(connect);
DEFINE_WRAPPER(creat);
DEFINE_WRAPPER(dup);
DEFINE_WRAPPER(dup2);
DEFINE_WRAPPER(epoll_create);
DEFINE_WRAPPER(epoll_ctl);
DEFINE_WRAPPER(epoll_wait);
DEFINE_WRAPPER(execve);
DEFINE_WRAPPER(exit);
DEFINE_WRAPPER(faccessat);
DEFINE_WRAPPER(fchdir);
DEFINE_WRAPPER(fchmod);
DEFINE_WRAPPER(fchmodat);
DEFINE_WRAPPER(fchown);
DEFINE_WRAPPER(fchownat);
DEFINE_WRAPPER(fclose);
DEFINE_WRAPPER(fcntl);
DEFINE_WRAPPER(fdatasync);
DEFINE_WRAPPER(fgetxattr);
DEFINE_WRAPPER(flistxattr);
DEFINE_WRAPPER(flock);
DEFINE_WRAPPER(printf);
DEFINE_WRAPPER(puts);
DEFINE_WRAPPER(fopen);
DEFINE_WRAPPER(fopen64);
DEFINE_WRAPPER(fork);
DEFINE_WRAPPER(fread);
DEFINE_WRAPPER(free);
DEFINE_WRAPPER(fremovexattr);
DEFINE_WRAPPER(fsetxattr);
DEFINE_WRAPPER(fstat);
DEFINE_WRAPPER(fstatfs);
DEFINE_WRAPPER(fsync);
DEFINE_WRAPPER(ftruncate);
DEFINE_WRAPPER(futimesat);
DEFINE_WRAPPER(fwrite);
DEFINE_WRAPPER(getcwd);
DEFINE_WRAPPER(getegid);
DEFINE_WRAPPER(geteuid);
DEFINE_WRAPPER(getgid);
DEFINE_WRAPPER(getgroups);
DEFINE_WRAPPER(getitimer);
DEFINE_WRAPPER(getpeername);
DEFINE_WRAPPER(getpgid);
DEFINE_WRAPPER(getpgrp);
DEFINE_WRAPPER(getpid);
DEFINE_WRAPPER(getppid);
DEFINE_WRAPPER(getpriority);
DEFINE_WRAPPER(getresgid);
DEFINE_WRAPPER(getresuid);
DEFINE_WRAPPER(getrlimit);
DEFINE_WRAPPER(getrusage);
DEFINE_WRAPPER(getsid);
DEFINE_WRAPPER(getsockname);
DEFINE_WRAPPER(getsockopt);
DEFINE_WRAPPER(gettimeofday);
DEFINE_WRAPPER(getuid);
DEFINE_WRAPPER(getxattr);
DEFINE_WRAPPER(inotify_add_watch);
DEFINE_WRAPPER(inotify_init);
DEFINE_WRAPPER(inotify_rm_watch);
DEFINE_WRAPPER(ioctl);
DEFINE_WRAPPER(ioperm);
DEFINE_WRAPPER(iopl);
DEFINE_WRAPPER(kill);
DEFINE_WRAPPER(lchown);
DEFINE_WRAPPER(lgetxattr);
DEFINE_WRAPPER(link);
DEFINE_WRAPPER(linkat);
DEFINE_WRAPPER(listen);
DEFINE_WRAPPER(listxattr);
DEFINE_WRAPPER(llistxattr);
DEFINE_WRAPPER(lremovexattr);
DEFINE_WRAPPER(lseek);
DEFINE_WRAPPER(lsetxattr);
DEFINE_WRAPPER(lstat);
DEFINE_WRAPPER(madvise);
DEFINE_WRAPPER(malloc);
DEFINE_WRAPPER(malloc_usable_size);
DEFINE_WRAPPER(memalign);
DEFINE_WRAPPER(mincore);
DEFINE_WRAPPER(mkdir);
DEFINE_WRAPPER(mkdirat);
DEFINE_WRAPPER(mknod);
DEFINE_WRAPPER(mknodat);
DEFINE_WRAPPER(mlock);
DEFINE_WRAPPER(mlockall);
DEFINE_WRAPPER(mmap);
DEFINE_WRAPPER(mount);
DEFINE_WRAPPER(mprotect);
DEFINE_WRAPPER(mq_notify);
DEFINE_WRAPPER(mq_open);
DEFINE_WRAPPER(mq_timedreceive);
DEFINE_WRAPPER(mq_timedsend);
DEFINE_WRAPPER(mq_unlink);
DEFINE_WRAPPER(mremap);
DEFINE_WRAPPER(msync);
DEFINE_WRAPPER(munlock);
DEFINE_WRAPPER(munlockall);
DEFINE_WRAPPER(munmap);
DEFINE_WRAPPER(nanosleep);
DEFINE_WRAPPER(open);
DEFINE_WRAPPER(openat);
DEFINE_WRAPPER(opendir);
DEFINE_WRAPPER(pause);
DEFINE_WRAPPER(personality);
DEFINE_WRAPPER(pipe);
DEFINE_WRAPPER(poll);
DEFINE_WRAPPER(posix_fadvise64);
DEFINE_WRAPPER(ppoll);
DEFINE_WRAPPER(prctl);
DEFINE_WRAPPER(pread);
DEFINE_WRAPPER(pselect);

DEFINE_WRAPPER(pthread_barrier_destroy);
DEFINE_WRAPPER(pthread_barrier_init);
DEFINE_WRAPPER(pthread_barrier_wait);
DEFINE_WRAPPER(pthread_cancel);
DEFINE_WRAPPER(pthread_condattr_init);
DEFINE_WRAPPER(pthread_cond_broadcast);
DEFINE_WRAPPER(pthread_cond_destroy);
DEFINE_WRAPPER(pthread_cond_init);
DEFINE_WRAPPER(pthread_cond_signal);
DEFINE_WRAPPER(pthread_cond_wait);
DEFINE_WRAPPER(pthread_create);
DEFINE_WRAPPER(pthread_detach);
DEFINE_WRAPPER(pthread_exit);
DEFINE_WRAPPER(pthread_join);
DEFINE_WRAPPER(pthread_kill);
DEFINE_WRAPPER(pthread_mutexattr_init);
DEFINE_WRAPPER(pthread_mutex_destroy);
DEFINE_WRAPPER(pthread_mutex_init);
DEFINE_WRAPPER(pthread_mutex_lock);
DEFINE_WRAPPER(pthread_mutex_trylock);
DEFINE_WRAPPER(pthread_mutex_unlock);
DEFINE_WRAPPER(pthread_self);

DEFINE_WRAPPER(ptrace);
DEFINE_WRAPPER(pwrite);
DEFINE_WRAPPER(read);
DEFINE_WRAPPER(readahead);
DEFINE_WRAPPER(readlink);
DEFINE_WRAPPER(readlinkat);
DEFINE_WRAPPER(readv);
DEFINE_WRAPPER(realloc);
DEFINE_WRAPPER(reboot);
DEFINE_WRAPPER(recvfrom);
DEFINE_WRAPPER(recvmsg);
DEFINE_WRAPPER(remap_file_pages);
DEFINE_WRAPPER(removexattr);
DEFINE_WRAPPER(rename);
DEFINE_WRAPPER(renameat);
DEFINE_WRAPPER(rmdir);
DEFINE_WRAPPER(sched_getaffinity);
DEFINE_WRAPPER(sched_getparam);
DEFINE_WRAPPER(sched_getscheduler);
DEFINE_WRAPPER(sched_get_priority_max);
DEFINE_WRAPPER(sched_get_priority_min);
DEFINE_WRAPPER(sched_rr_get_interval);
DEFINE_WRAPPER(sched_setaffinity);
DEFINE_WRAPPER(sched_setparam);
DEFINE_WRAPPER(sched_setscheduler);
DEFINE_WRAPPER(sched_yield);
DEFINE_WRAPPER(select);
DEFINE_WRAPPER(semctl);
DEFINE_WRAPPER(semget);
DEFINE_WRAPPER(semop);
DEFINE_WRAPPER(semtimedop);
DEFINE_WRAPPER(sendfile);
DEFINE_WRAPPER(sendmsg);
DEFINE_WRAPPER(sendto);
DEFINE_WRAPPER(setdomainname);
DEFINE_WRAPPER(setfsgid);
DEFINE_WRAPPER(setfsuid);
DEFINE_WRAPPER(setgid);
DEFINE_WRAPPER(setgroups);
DEFINE_WRAPPER(sethostname);
DEFINE_WRAPPER(setitimer);
DEFINE_WRAPPER(setpgid);
DEFINE_WRAPPER(setpriority);
DEFINE_WRAPPER(setregid);
DEFINE_WRAPPER(setresgid);
DEFINE_WRAPPER(setresuid);
DEFINE_WRAPPER(setreuid);
DEFINE_WRAPPER(setrlimit);
DEFINE_WRAPPER(setsid);
DEFINE_WRAPPER(setsockopt);
DEFINE_WRAPPER(settimeofday);
DEFINE_WRAPPER(setuid);
DEFINE_WRAPPER(setxattr);
DEFINE_WRAPPER(shmat);
DEFINE_WRAPPER(shmctl);
DEFINE_WRAPPER(shmget);
DEFINE_WRAPPER(shutdown);
DEFINE_WRAPPER(sigaction);
DEFINE_WRAPPER(sigaltstack);
DEFINE_WRAPPER(sigpending);
DEFINE_WRAPPER(sigprocmask);
DEFINE_WRAPPER(sigreturn);
DEFINE_WRAPPER(sigsuspend);
DEFINE_WRAPPER(sigtimedwait);
DEFINE_WRAPPER(sigwait);
DEFINE_WRAPPER(socket);
DEFINE_WRAPPER(socketpair);
DEFINE_WRAPPER(splice);
DEFINE_WRAPPER(stat);
DEFINE_WRAPPER(statfs);
DEFINE_WRAPPER(swapoff);
DEFINE_WRAPPER(swapon);
DEFINE_WRAPPER(symlink);
DEFINE_WRAPPER(symlinkat);
DEFINE_WRAPPER(sync);
DEFINE_WRAPPER(sync_file_range);
DEFINE_WRAPPER(sysctl);
DEFINE_WRAPPER(sysinfo);
DEFINE_WRAPPER(vsyslog);
DEFINE_WRAPPER(tee);
DEFINE_WRAPPER(time);
DEFINE_WRAPPER(timer_create);
DEFINE_WRAPPER(timer_delete);
DEFINE_WRAPPER(timer_getoverrun);
DEFINE_WRAPPER(timer_gettime);
DEFINE_WRAPPER(timer_settime);
DEFINE_WRAPPER(times);
DEFINE_WRAPPER(truncate);
DEFINE_WRAPPER(umask);
DEFINE_WRAPPER(umount2);
DEFINE_WRAPPER(uname);
DEFINE_WRAPPER(unlink);
DEFINE_WRAPPER(unlinkat);
DEFINE_WRAPPER(unshare);
DEFINE_WRAPPER(ustat);
DEFINE_WRAPPER(utime);
DEFINE_WRAPPER(utimes);
DEFINE_WRAPPER(vfork);
DEFINE_WRAPPER(vhangup);
DEFINE_WRAPPER(vmsplice);
DEFINE_WRAPPER(wait4);
DEFINE_WRAPPER(waitid);
DEFINE_WRAPPER(write);
DEFINE_WRAPPER(writev);

void initializer() {
  INIT_WRAPPER(accept, RTLD_NEXT);
  INIT_WRAPPER(access, RTLD_NEXT);
  INIT_WRAPPER(acct, RTLD_NEXT);
  INIT_WRAPPER(adjtimex, RTLD_NEXT);
  INIT_WRAPPER(alarm, RTLD_NEXT);
  INIT_WRAPPER(bind, RTLD_NEXT);
  INIT_WRAPPER(brk, RTLD_NEXT);
  INIT_WRAPPER(chdir, RTLD_NEXT);
  INIT_WRAPPER(chmod, RTLD_NEXT);
  INIT_WRAPPER(chown, RTLD_NEXT);
  INIT_WRAPPER(chroot, RTLD_NEXT);
  INIT_WRAPPER(clock_getres, RTLD_NEXT);
  INIT_WRAPPER(clock_gettime, RTLD_NEXT);
  INIT_WRAPPER(clock_nanosleep, RTLD_NEXT);
  INIT_WRAPPER(clock_settime, RTLD_NEXT);
  INIT_WRAPPER(clone, RTLD_NEXT);
  INIT_WRAPPER(close, RTLD_NEXT);
  INIT_WRAPPER(closedir, RTLD_NEXT);
  INIT_WRAPPER(connect, RTLD_NEXT);
  INIT_WRAPPER(creat, RTLD_NEXT);
  INIT_WRAPPER(dup, RTLD_NEXT);
  INIT_WRAPPER(dup2, RTLD_NEXT);
  INIT_WRAPPER(epoll_create, RTLD_NEXT);
  INIT_WRAPPER(epoll_ctl, RTLD_NEXT);
  INIT_WRAPPER(epoll_wait, RTLD_NEXT);
  INIT_WRAPPER(execve, RTLD_NEXT);
  INIT_WRAPPER(exit, RTLD_NEXT);
  INIT_WRAPPER(faccessat, RTLD_NEXT);
  INIT_WRAPPER(fchdir, RTLD_NEXT);
  INIT_WRAPPER(fchmod, RTLD_NEXT);
  INIT_WRAPPER(fchmodat, RTLD_NEXT);
  INIT_WRAPPER(fchown, RTLD_NEXT);
  INIT_WRAPPER(fchownat, RTLD_NEXT);
  INIT_WRAPPER(fclose, RTLD_NEXT);
  INIT_WRAPPER(fcntl, RTLD_NEXT);
  INIT_WRAPPER(fdatasync, RTLD_NEXT);
  INIT_WRAPPER(fgetxattr, RTLD_NEXT);
  INIT_WRAPPER(flistxattr, RTLD_NEXT);
  INIT_WRAPPER(flock, RTLD_NEXT);
  INIT_WRAPPER(printf, RTLD_NEXT);
  INIT_WRAPPER(puts, RTLD_NEXT);
  INIT_WRAPPER(fopen, RTLD_NEXT);
  INIT_WRAPPER(fopen64, RTLD_NEXT);
  INIT_WRAPPER(fork, RTLD_NEXT);
  INIT_WRAPPER(fread, RTLD_NEXT);
  INIT_WRAPPER(free, RTLD_NEXT);
  INIT_WRAPPER(fremovexattr, RTLD_NEXT);
  INIT_WRAPPER(fsetxattr, RTLD_NEXT);
  INIT_WRAPPER(fstat, RTLD_NEXT);
  INIT_WRAPPER(fstatfs, RTLD_NEXT);
  INIT_WRAPPER(fsync, RTLD_NEXT);
  INIT_WRAPPER(ftruncate, RTLD_NEXT);
  INIT_WRAPPER(futimesat, RTLD_NEXT);
  INIT_WRAPPER(fwrite, RTLD_NEXT);
  INIT_WRAPPER(getcwd, RTLD_NEXT);
  INIT_WRAPPER(getegid, RTLD_NEXT);
  INIT_WRAPPER(geteuid, RTLD_NEXT);
  INIT_WRAPPER(getgid, RTLD_NEXT);
  INIT_WRAPPER(getgroups, RTLD_NEXT);
  INIT_WRAPPER(getitimer, RTLD_NEXT);
  INIT_WRAPPER(getpeername, RTLD_NEXT);
  INIT_WRAPPER(getpgid, RTLD_NEXT);
  INIT_WRAPPER(getpgrp, RTLD_NEXT);
  INIT_WRAPPER(getpid, RTLD_NEXT);
  INIT_WRAPPER(getppid, RTLD_NEXT);
  INIT_WRAPPER(getpriority, RTLD_NEXT);
  INIT_WRAPPER(getresgid, RTLD_NEXT);
  INIT_WRAPPER(getresuid, RTLD_NEXT);
  INIT_WRAPPER(getrlimit, RTLD_NEXT);
  INIT_WRAPPER(getrusage, RTLD_NEXT);
  INIT_WRAPPER(getsid, RTLD_NEXT);
  INIT_WRAPPER(getsockname, RTLD_NEXT);
  INIT_WRAPPER(getsockopt, RTLD_NEXT);
  INIT_WRAPPER(gettimeofday, RTLD_NEXT);
  INIT_WRAPPER(getuid, RTLD_NEXT);
  INIT_WRAPPER(getxattr, RTLD_NEXT);
  INIT_WRAPPER(inotify_add_watch, RTLD_NEXT);
  INIT_WRAPPER(inotify_init, RTLD_NEXT);
  INIT_WRAPPER(inotify_rm_watch, RTLD_NEXT);
  INIT_WRAPPER(ioctl, RTLD_NEXT);
  INIT_WRAPPER(ioperm, RTLD_NEXT);
  INIT_WRAPPER(iopl, RTLD_NEXT);
  INIT_WRAPPER(kill, RTLD_NEXT);
  INIT_WRAPPER(lchown, RTLD_NEXT);
  INIT_WRAPPER(lgetxattr, RTLD_NEXT);
  INIT_WRAPPER(link, RTLD_NEXT);
  INIT_WRAPPER(linkat, RTLD_NEXT);
  INIT_WRAPPER(listen, RTLD_NEXT);
  INIT_WRAPPER(listxattr, RTLD_NEXT);
  INIT_WRAPPER(llistxattr, RTLD_NEXT);
  INIT_WRAPPER(lremovexattr, RTLD_NEXT);
  INIT_WRAPPER(lseek, RTLD_NEXT);
  INIT_WRAPPER(lsetxattr, RTLD_NEXT);
  INIT_WRAPPER(lstat, RTLD_NEXT);
  INIT_WRAPPER(madvise, RTLD_NEXT);
  INIT_WRAPPER(malloc, RTLD_NEXT);
  INIT_WRAPPER(malloc_usable_size, RTLD_NEXT);
  INIT_WRAPPER(memalign, RTLD_NEXT);
  INIT_WRAPPER(mincore, RTLD_NEXT);
  INIT_WRAPPER(mkdir, RTLD_NEXT);
  INIT_WRAPPER(mkdirat, RTLD_NEXT);
  INIT_WRAPPER(mknod, RTLD_NEXT);
  INIT_WRAPPER(mknodat, RTLD_NEXT);
  INIT_WRAPPER(mlock, RTLD_NEXT);
  INIT_WRAPPER(mlockall, RTLD_NEXT);
  INIT_WRAPPER(mmap, RTLD_NEXT);
  INIT_WRAPPER(mount, RTLD_NEXT);
  INIT_WRAPPER(mprotect, RTLD_NEXT);
  INIT_WRAPPER(mq_notify, RTLD_NEXT);
  INIT_WRAPPER(mq_open, RTLD_NEXT);
  INIT_WRAPPER(mq_timedreceive, RTLD_NEXT);
  INIT_WRAPPER(mq_timedsend, RTLD_NEXT);
  INIT_WRAPPER(mq_unlink, RTLD_NEXT);
  INIT_WRAPPER(mremap, RTLD_NEXT);
  INIT_WRAPPER(msync, RTLD_NEXT);
  INIT_WRAPPER(munlock, RTLD_NEXT);
  INIT_WRAPPER(munlockall, RTLD_NEXT);
  INIT_WRAPPER(munmap, RTLD_NEXT);
  INIT_WRAPPER(nanosleep, RTLD_NEXT);
  INIT_WRAPPER(open, RTLD_NEXT);
  INIT_WRAPPER(openat, RTLD_NEXT);
  INIT_WRAPPER(opendir, RTLD_NEXT);
  INIT_WRAPPER(pause, RTLD_NEXT);
  INIT_WRAPPER(personality, RTLD_NEXT);
  INIT_WRAPPER(pipe, RTLD_NEXT);
  INIT_WRAPPER(poll, RTLD_NEXT);
  INIT_WRAPPER(posix_fadvise64, RTLD_NEXT);
  INIT_WRAPPER(ppoll, RTLD_NEXT);
  INIT_WRAPPER(prctl, RTLD_NEXT);
  INIT_WRAPPER(pread, RTLD_NEXT);
  INIT_WRAPPER(pselect, RTLD_NEXT);

  void* pthread_handle = dlopen("libpthread.so.0", RTLD_NOW | RTLD_GLOBAL | RTLD_NOLOAD);

  INIT_WRAPPER(pthread_barrier_destroy, pthread_handle);
  INIT_WRAPPER(pthread_barrier_init, pthread_handle);
  INIT_WRAPPER(pthread_barrier_wait, pthread_handle);
  INIT_WRAPPER(pthread_cancel, pthread_handle);
  INIT_WRAPPER(pthread_condattr_init, pthread_handle);
  INIT_WRAPPER(pthread_cond_broadcast, pthread_handle);
  INIT_WRAPPER(pthread_cond_destroy, pthread_handle);
  INIT_WRAPPER(pthread_cond_init, pthread_handle);
  INIT_WRAPPER(pthread_cond_signal, pthread_handle);
  INIT_WRAPPER(pthread_cond_wait, pthread_handle);
  INIT_WRAPPER(pthread_create, pthread_handle);
  INIT_WRAPPER(pthread_detach, pthread_handle);
  INIT_WRAPPER(pthread_exit, pthread_handle);
  INIT_WRAPPER(pthread_join, pthread_handle);
  INIT_WRAPPER(pthread_kill, pthread_handle);
  INIT_WRAPPER(pthread_mutexattr_init, pthread_handle);
  INIT_WRAPPER(pthread_mutex_destroy, pthread_handle);
  INIT_WRAPPER(pthread_mutex_init, pthread_handle);
  INIT_WRAPPER(pthread_mutex_lock, pthread_handle);
  INIT_WRAPPER(pthread_mutex_trylock, pthread_handle);
  INIT_WRAPPER(pthread_mutex_unlock, pthread_handle);
  INIT_WRAPPER(pthread_self, pthread_handle);

  INIT_WRAPPER(ptrace, RTLD_NEXT);
  INIT_WRAPPER(pwrite, RTLD_NEXT);
  INIT_WRAPPER(read, RTLD_NEXT);
  INIT_WRAPPER(readahead, RTLD_NEXT);
  INIT_WRAPPER(readlink, RTLD_NEXT);
  INIT_WRAPPER(readlinkat, RTLD_NEXT);
  INIT_WRAPPER(readv, RTLD_NEXT);
  INIT_WRAPPER(realloc, RTLD_NEXT);
  INIT_WRAPPER(reboot, RTLD_NEXT);
  INIT_WRAPPER(recvfrom, RTLD_NEXT);
  INIT_WRAPPER(recvmsg, RTLD_NEXT);
  INIT_WRAPPER(remap_file_pages, RTLD_NEXT);
  INIT_WRAPPER(removexattr, RTLD_NEXT);
  INIT_WRAPPER(rename, RTLD_NEXT);
  INIT_WRAPPER(renameat, RTLD_NEXT);
  INIT_WRAPPER(rmdir, RTLD_NEXT);
  INIT_WRAPPER(sched_getaffinity, RTLD_NEXT);
  INIT_WRAPPER(sched_getparam, RTLD_NEXT);
  INIT_WRAPPER(sched_getscheduler, RTLD_NEXT);
  INIT_WRAPPER(sched_get_priority_max, RTLD_NEXT);
  INIT_WRAPPER(sched_get_priority_min, RTLD_NEXT);
  INIT_WRAPPER(sched_rr_get_interval, RTLD_NEXT);
  INIT_WRAPPER(sched_setaffinity, RTLD_NEXT);
  INIT_WRAPPER(sched_setparam, RTLD_NEXT);
  INIT_WRAPPER(sched_setscheduler, RTLD_NEXT);
  INIT_WRAPPER(sched_yield, RTLD_NEXT);
  INIT_WRAPPER(select, RTLD_NEXT);
  INIT_WRAPPER(semctl, RTLD_NEXT);
  INIT_WRAPPER(semget, RTLD_NEXT);
  INIT_WRAPPER(semop, RTLD_NEXT);
  INIT_WRAPPER(semtimedop, RTLD_NEXT);
  INIT_WRAPPER(sendfile, RTLD_NEXT);
  INIT_WRAPPER(sendmsg, RTLD_NEXT);
  INIT_WRAPPER(sendto, RTLD_NEXT);
  INIT_WRAPPER(setdomainname, RTLD_NEXT);
  INIT_WRAPPER(setfsgid, RTLD_NEXT);
  INIT_WRAPPER(setfsuid, RTLD_NEXT);
  INIT_WRAPPER(setgid, RTLD_NEXT);
  INIT_WRAPPER(setgroups, RTLD_NEXT);
  INIT_WRAPPER(sethostname, RTLD_NEXT);
  INIT_WRAPPER(setitimer, RTLD_NEXT);
  INIT_WRAPPER(setpgid, RTLD_NEXT);
  INIT_WRAPPER(setpriority, RTLD_NEXT);
  INIT_WRAPPER(setregid, RTLD_NEXT);
  INIT_WRAPPER(setresgid, RTLD_NEXT);
  INIT_WRAPPER(setresuid, RTLD_NEXT);
  INIT_WRAPPER(setreuid, RTLD_NEXT);
  INIT_WRAPPER(setrlimit, RTLD_NEXT);
  INIT_WRAPPER(setsid, RTLD_NEXT);
  INIT_WRAPPER(setsockopt, RTLD_NEXT);
  INIT_WRAPPER(settimeofday, RTLD_NEXT);
  INIT_WRAPPER(setuid, RTLD_NEXT);
  INIT_WRAPPER(setxattr, RTLD_NEXT);
  INIT_WRAPPER(shmat, RTLD_NEXT);
  INIT_WRAPPER(shmctl, RTLD_NEXT);
  INIT_WRAPPER(shmget, RTLD_NEXT);
  INIT_WRAPPER(shutdown, RTLD_NEXT);
  INIT_WRAPPER(sigaction, RTLD_NEXT);
  INIT_WRAPPER(sigaltstack, RTLD_NEXT);
  INIT_WRAPPER(sigpending, RTLD_NEXT);
  INIT_WRAPPER(sigprocmask, RTLD_NEXT);
  INIT_WRAPPER(sigreturn, RTLD_NEXT);
  INIT_WRAPPER(sigsuspend, RTLD_NEXT);
  INIT_WRAPPER(sigtimedwait, RTLD_NEXT);
  INIT_WRAPPER(sigwait, RTLD_NEXT);
  INIT_WRAPPER(socket, RTLD_NEXT);
  INIT_WRAPPER(socketpair, RTLD_NEXT);
  INIT_WRAPPER(splice, RTLD_NEXT);
  INIT_WRAPPER(stat, RTLD_NEXT);
  INIT_WRAPPER(statfs, RTLD_NEXT);
  INIT_WRAPPER(swapoff, RTLD_NEXT);
  INIT_WRAPPER(swapon, RTLD_NEXT);
  INIT_WRAPPER(symlink, RTLD_NEXT);
  INIT_WRAPPER(symlinkat, RTLD_NEXT);
  INIT_WRAPPER(sync, RTLD_NEXT);
  INIT_WRAPPER(sync_file_range, RTLD_NEXT);
  INIT_WRAPPER(sysctl, RTLD_NEXT);
  INIT_WRAPPER(sysinfo, RTLD_NEXT);
  INIT_WRAPPER(vsyslog, RTLD_NEXT);
  INIT_WRAPPER(tee, RTLD_NEXT);
  INIT_WRAPPER(time, RTLD_NEXT);
  INIT_WRAPPER(timer_create, RTLD_NEXT);
  INIT_WRAPPER(timer_delete, RTLD_NEXT);
  INIT_WRAPPER(timer_getoverrun, RTLD_NEXT);
  INIT_WRAPPER(timer_gettime, RTLD_NEXT);
  INIT_WRAPPER(timer_settime, RTLD_NEXT);
  INIT_WRAPPER(times, RTLD_NEXT);
  INIT_WRAPPER(truncate, RTLD_NEXT);
  INIT_WRAPPER(umask, RTLD_NEXT);
  INIT_WRAPPER(umount2, RTLD_NEXT);
  INIT_WRAPPER(uname, RTLD_NEXT);
  INIT_WRAPPER(unlink, RTLD_NEXT);
  INIT_WRAPPER(unlinkat, RTLD_NEXT);
  INIT_WRAPPER(unshare, RTLD_NEXT);
  INIT_WRAPPER(ustat, RTLD_NEXT);
  INIT_WRAPPER(utime, RTLD_NEXT);
  INIT_WRAPPER(utimes, RTLD_NEXT);
  INIT_WRAPPER(vfork, RTLD_NEXT);
  INIT_WRAPPER(vhangup, RTLD_NEXT);
  INIT_WRAPPER(vmsplice, RTLD_NEXT);
  INIT_WRAPPER(wait4, RTLD_NEXT);
  INIT_WRAPPER(waitid, RTLD_NEXT);
  INIT_WRAPPER(write, RTLD_NEXT);
  INIT_WRAPPER(writev, RTLD_NEXT);
}
}
