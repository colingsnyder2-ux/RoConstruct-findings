// roc 2010-06 00601590  unit: RBX::ArrowTool  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00601590
//
// 00601590  8b442404             mov eax, dword ptr [esp + 4]
// 00601594  6a00                 push 0
// 00601596  50                   push eax
// 00601597  e854e4ebff           call 0x4bf9f0
// 0060159c  83c408               add esp, 8
// 0060159f  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
