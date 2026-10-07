// roc 2008-06 00627320  unit: seg_00620000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00627320
//
// 00627320  8b442404             mov eax, dword ptr [esp + 4]
// 00627324  6a01                 push 1
// 00627326  50                   push eax
// 00627327  e844feffff           call 0x627170
// 0062732c  83c408               add esp, 8
// 0062732f  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_find)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
