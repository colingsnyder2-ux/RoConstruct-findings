// roc 2010-06 007365a0  unit: seg_00730000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007365a0
//
// 007365a0  8b442404             mov eax, dword ptr [esp + 4]
// 007365a4  6a01                 push 1
// 007365a6  50                   push eax
// 007365a7  e844feffff           call 0x7363f0
// 007365ac  83c408               add esp, 8
// 007365af  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_find)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
