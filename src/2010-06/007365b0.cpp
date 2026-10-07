// roc 2010-06 007365b0  unit: seg_00730000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007365b0
//
// 007365b0  8b442404             mov eax, dword ptr [esp + 4]
// 007365b4  6a00                 push 0
// 007365b6  50                   push eax
// 007365b7  e834feffff           call 0x7363f0
// 007365bc  83c408               add esp, 8
// 007365bf  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
