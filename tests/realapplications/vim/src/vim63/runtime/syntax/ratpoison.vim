" Vim syntax file
" Filename:	ratpoison.vim
" Language:	Ratpoison configuration/commands file ( /etc/ratpoisonrc ~/.ratpoisonrc )
" Maintainer:	Doug Kearns <djkea2@mugca.its.monash.edu.au>
" URL:		http://mugca.its.monash.edu.au/~djkea2/vim/syntax/ratpoison.vim
" Last Change:	2004 Apr 27

" For version 5.x: Clear all syntax items
" For version 6.x: Quit when a syntax file was already loaded
if version < 600
  syntax clear
elseif exists("b:current_syntax")
  finish
endif

syn match   ratpoisonComment	"^\s*#.*$"		contains=ratpoisonTodo

syn keyword ratpoisonTodo	TODO NOTE FIXME XXX	contained

syn case ignore
syn keyword ratpoisonBooleanArg	on off			contained
syn case match

syn keyword ratpoisonCommandArg abort addhook alias banish bind						contained
syn keyword ratpoisonCommandArg chdir clrunmanaged colon curframe defbarborder				contained
syn keyword ratpoisonCommandArg defbargravity defbarpadding defbgcolor defborder deffgcolor		contained
syn keyword ratpoisonCommandArg deffont defframesels definekey definputwidth defmaxsizegravity		contained
syn keyword ratpoisonCommandArg defpadding defresizeunit deftransgravity defwaitcursor defwinfmt	contained
syn keyword ratpoisonCommandArg defwingravity defwinliststyle defwinname delete delkmap			contained
syn keyword ratpoisonCommandArg echo escape exec fdump focus						contained
syn keyword ratpoisonCommandArg focusdown focuslast focusleft focusright focusup			contained
syn keyword ratpoisonCommandArg frestore fselect gdelete getenv gmerge					contained
syn keyword ratpoisonCommandArg gmove gnew gnewbg gnext gprev						contained
syn keyword ratpoisonCommandArg gravity groups gselect help hsplit					contained
syn keyword ratpoisonCommandArg info kill lastmsg license link						contained
syn keyword ratpoisonCommandArg listhook meta msgwait newkmap newwm					contained
syn keyword ratpoisonCommandArg next nextscreen number only other					contained
syn keyword ratpoisonCommandArg prev prevscreen quit readkey redisplay					contained
syn keyword ratpoisonCommandArg remhook remove resize restart rudeness					contained
syn keyword ratpoisonCommandArg select setenv shrink source split					contained
syn keyword ratpoisonCommandArg startup_message time title tmpwm unalias				contained
syn keyword ratpoisonCommandArg unbind unmanage unsetenv verbexec version				contained
syn keyword ratpoisonCommandArg vsplit warp windows syn case ignore					contained

syn match   ratpoisonGravityArg "\<\(n\|north\)\>"	contained
syn match   ratpoisonGravityArg "\<\(nw\|northwest\)\>"	contained
syn match   ratpoisonGravityArg "\<\(ne\|northeast\)\>"	contained
syn match   ratpoisonGravityArg "\<\(w\|west\)\>"	contained
syn match   ratpoisonGravityArg "\<\(c\|center\)\>"	contained
syn match   ratpoisonGravityArg "\<\(e\|east\)\>"	contained
syn match   ratpoisonGravityArg "\<\(s\|south\)\>"	contained
syn match   ratpoisonGravityArg "\<\(sw\|southwest\)\>"	contained
syn match   ratpoisonGravityArg "\<\(se\|southeast\)\>"	contained
syn case match

syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(F[1-9][0-9]\=\|\(\a\|\d\)\)\>" contained nextgroup=ratpoisonCommandArg skipwhite

syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(space\|exclam\|quotedbl\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(numbersign\|dollar\|percent\|ampersand\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(apostrophe\|quoteright\|parenleft\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(parenright\|asterisk\|plus\|comma\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(minus\|period\|slash\|colon\|semicolon\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(less\|equal\|greater\|question\|at\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(bracketleft\|backslash\|bracketright\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(asciicircum\|underscore\|grave\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(quoteleft\|braceleft\|bar\|braceright\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(asciitilde\)\>" contained nextgroup=ratpoisonCommandArg skipwhite

syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(BackSpace\|Tab\|Linefeed\|Clear\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(Return\|Pause\|Scroll_Lock\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(Sys_Req\|Escape\|Delete\)\>" contained nextgroup=ratpoisonCommandArg skipwhite

syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(Home\|Left\|Up\|Right\|Down\|Prior\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(Page_Up\|Next\|Page_Down\|End\|Begin\)\>" contained nextgroup=ratpoisonCommandArg skipwhite

syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(Select\|Print\|Execute\|Insert\|Undo\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(Redo\|Menu\|Find\|Cancel\|Help\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=\(Break\|Mode_switch\|script_switch\|Num_Lock\)\>" contained nextgroup=ratpoisonCommandArg skipwhite

syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=KP_\(Space\|Tab\|Enter\|F[1234]\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=KP_\(Home\|Left\|Up\|Right\|Down\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=KP_\(Prior\|Page_Up\|Next\|Page_Down\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=KP_\(End\|Begin\|Insert\|Delete\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=KP_\(Equal\|Multiply\|Add\|Separator\)\>" contained nextgroup=ratpoisonCommandArg skipwhite
syn match   ratpoisonKeySeqArg  "\<\([CMASH]\(-[CMASH]\)\{,4}-\)\=KP_\(Subtract\|Decimal\|Divide\|\d\)\>" contained nextgroup=ratpoisonCommandArg skipwhite

syn match   ratpoisonHookArg    "\<\(key\|switchwin\|switchframe\|switchgroup\|quit\|restart\)\>" contained

syn match   ratpoisonNumberArg  "\<\d\+\>"	contained nextgroup=ratpoisonNumberArg skipwhite

syn keyword ratpoisonSetArg	barborder	contained nextgroup=ratpoisonNumberArg
syn keyword ratpoisonSetArg	bargravity	contained nextgroup=ratpoisonGravityArg
syn keyword ratpoisonSetArg	barpadding	contained nextgroup=ratpoisonNumberArg
syn keyword ratpoisonSetArg	bgcolor
syn keyword ratpoisonSetArg	border		contained nextgroup=ratpoisonNumberArg
syn keyword ratpoisonSetArg	fgcolor
syn keyword ratpoisonSetArg	font
syn keyword ratpoisonSetArg	framesels
syn keyword ratpoisonSetArg	inputwidth	contained nextgroup=ratpoisonNumberArg
syn keyword ratpoisonSetArg	maxsizegravity	contained nextgroup=ratpoisonGravityArg
syn keyword ratpoisonSetArg	padding		contained nextgroup=ratpoisonNumberArg
syn keyword ratpoisonSetArg	resizeunit	contained nextgroup=ratpoisonNumberArg
syn keyword ratpoisonSetArg	transgravity	contained nextgroup=ratpoisonGravityArg
syn keyword ratpoisonSetArg	waitcursor	contained nextgroup=ratpoisonNumberArg
syn keyword ratpoisonSetArg	winfmt		contained nextgroup=ratpoisonWinFmtArg
syn keyword ratpoisonSetArg	wingravity	contained nextgroup=ratpoisonGravityArg
syn keyword ratpoisonSetArg	winliststyle	contained nextgroup=ratpoisonWinListArg
syn keyword ratpoisonSetArg	winname		contained nextgroup=ratpoisonWinNameArg

syn match   ratpoisonWinFmtArg  "%[nstacil]"			contained nextgroup=ratpoisonWinFmtArg skipwhite

syn match   ratpoisonWinListArg "\<\(row\|column\)\>"		contained

syn match   ratpoisonWinNameArg "\<\(name\|title\|class\)\>"	contained

syn match   ratpoisonDefCommand		"^\s*set\s*"			nextgroup=ratpoisonSetArg
syn match   ratpoisonDefCommand		"^\s*defbarborder\s*"		nextgroup=ratpoisonNumberArg
syn match   ratpoisonDefCommand		"^\s*defbargravity\s*"		nextgroup=ratpoisonGravityArg
syn match   ratpoisonDefCommand		"^\s*defbarpadding\s*"		nextgroup=ratpoisonNumberArg
syn match   ratpoisonDefCommand		"^\s*defbgcolor\s*"
syn match   ratpoisonDefCommand		"^\s*defborder\s*"		nextgroup=ratpoisonNumberArg
syn match   ratpoisonDefCommand		"^\s*deffgcolor\s*"
syn match   ratpoisonDefCommand		"^\s*deffont\s*"
syn match   ratpoisonDefCommand		"^\s*defframesels\s*"
syn match   ratpoisonDefCommand		"^\s*definputwidth\s*"		nextgroup=ratpoisonNumberArg
syn match   ratpoisonDefCommand		"^\s*defmaxsizegravity\s*"	nextgroup=ratpoisonGravityArg
syn match   ratpoisonDefCommand		"^\s*defpadding\s*"		nextgroup=ratpoisonNumberArg
syn match   ratpoisonDefCommand		"^\s*defresizeunit\s*"		nextgroup=ratpoisonNumberArg
syn match   ratpoisonDefCommand		"^\s*deftransgravity\s*"	nextgroup=ratpoisonGravityArg
syn match   ratpoisonDefCommand		"^\s*defwaitcursor\s*"		nextgroup=ratpoisonNumberArg
syn match   ratpoisonDefCommand		"^\s*defwinfmt\s*"		nextgroup=ratpoisonWinFmtArg
syn match   ratpoisonDefCommand		"^\s*defwingravity\s*"		nextgroup=ratpoisonGravityArg
syn match   ratpoisonDefCommand		"^\s*defwinliststyle\s*"	nextgroup=ratpoisonWinListArg
syn match   ratpoisonDefCommand		"^\s*defwinname\s*"		nextgroup=ratpoisonWinNameArg
syn match   ratpoisonDefCommand		"^\s*msgwait\s*"		nextgroup=ratpoisonNumberArg

syn match   ratpoisonStringCommand	"^\s*\zsaddhook\ze\s*"		nextgroup=ratpoisonHookArg
syn match   ratpoisonStringCommand	"^\s*\zsalias\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zsbind\ze\s*"		nextgroup=ratpoisonKeySeqArg
syn match   ratpoisonStringCommand	"^\s*\zschdir\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zscolon\ze\s*"		nextgroup=ratpoisonCommandArg
syn match   ratpoisonStringCommand	"^\s*\zsdefinekey\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zsdelkmap\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zsecho\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zsescape\ze\s*"		nextgroup=ratpoisonKeySeqArg
syn match   ratpoisonStringCommand	"^\s*\zsexec\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zsfdump\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zsfrestore\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zsgdelete\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zsgetenv\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zsgravity\ze\s*"		nextgroup=ratpoisonGravityArg
syn match   ratpoisonStringCommand	"^\s*\zsgselect\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zslink\ze\s*"		nextgroup=ratpoisonKeySeqArg
syn match   ratpoisonStringCommand	"^\s*\zslisthook\ze\s*"		nextgroup=ratpoisonHookArg
syn match   ratpoisonStringCommand	"^\s*\zsnewkmap\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zsnewwm\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zsnumber\ze\s*"		nextgroup=ratpoisonNumberArg
syn match   ratpoisonStringCommand	"^\s*\zsreadkey\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zsremhook\ze\s*"		nextgroup=ratpoisonHookArg
syn match   ratpoisonStringCommand	"^\s*\zsresize\ze\s*"		nextgroup=ratpoisonNumberArg
syn match   ratpoisonStringCommand	"^\s*\zsrudeness\ze\s*"		nextgroup=ratpoisonNumberArg
syn match   ratpoisonStringCommand	"^\s*\zsselect\ze\s*"		nextgroup=ratpoisonNumberArg
syn match   ratpoisonStringCommand	"^\s*\zssetenv\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zssource\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zsstartup_message\ze\s*"	nextgroup=ratpoisonBooleanArg
syn match   ratpoisonStringCommand	"^\s*\zstitle\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zstmpwm\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zsunalias\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zsunbind\ze\s*"		nextgroup=ratpoisonKeySeqArg
syn match   ratpoisonStringCommand	"^\s*\zsunmanage\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zsunsetenv\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zsverbexec\ze\s*"
syn match   ratpoisonStringCommand	"^\s*\zswarp\ze\s*"		nextgroup=ratpoisonBooleanArg

syn match   ratpoisonVoidCommand	"^\s*\zsabort\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsbanish\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsclrunmanaged\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zscurframe\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsdelete\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsfocusdown\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsfocuslast\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsfocusleft\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsfocusright\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsfocus\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsfocusup\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsfselect\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsgmerge\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsgmove\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsgnewbg\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsgnew\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsgnext\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsgprev\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsgroups\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zshelp\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zshsplit\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsinfo\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zskill\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zslastmsg\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zslicense\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsmeta\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsnext\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsnextscreen\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsonly\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsother\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsprev\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsprevscreen\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsquit\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsredisplay\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsremove\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsrestart\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsshrink\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zssplit\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zstime\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsversion\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zsvsplit\ze\s*$"
syn match   ratpoisonVoidCommand	"^\s*\zswindows\ze\s*$"

" Define the default highlighting.
" For version 5.7 and earlier: only when not done already
" For version 5.8 and later: only when an item doesn't have highlighting yet
if version >= 508 || !exists("did_ratpoison_syn_inits")
  if version < 508
    let did_ratpoison_syn_inits = 1
    command -nargs=+ HiLink hi link <args>
  else
    command -nargs=+ HiLink hi def link <args>
  endif

  HiLink ratpoisonBooleanArg	Boolean
  HiLink ratpoisonCommandArg	Keyword
  HiLink ratpoisonComment	Comment
  HiLink ratpoisonDefCommand	Identifier
  HiLink ratpoisonGravityArg	Constant
  HiLink ratpoisonKeySeqArg	Special
  HiLink ratpoisonNumberArg	Number
  HiLink ratpoisonSetArg	Keyword
  HiLink ratpoisonStringCommand	Identifier
  HiLink ratpoisonTodo		Todo
  HiLink ratpoisonVoidCommand	Identifier
  HiLink ratpoisonWinFmtArg	Special
  HiLink ratpoisonWinNameArg	Constant
  HiLink ratpoisonWinListArg	Constant

  delcommand HiLink
endif

let b:current_syntax = "ratpoison"

" vim: ts=8
