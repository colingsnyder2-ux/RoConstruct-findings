// roc 2008-06 00627330  unit: seg_00620000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00627330
//
// 00627330  8b442404             mov eax, dword ptr [esp + 4]
// 00627334  6a00                 push 0
// 00627336  50                   push eax
// 00627337  e834feffff           call 0x627170
// 0062733c  83c408               add esp, 8
// 0062733f  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
