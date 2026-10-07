// roc 2011-06 00647df0  unit: RBX::Accoutrement  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00647df0
//
// 00647df0  8b442404             mov eax, dword ptr [esp + 4]
// 00647df4  6a00                 push 0
// 00647df6  50                   push eax
// 00647df7  e804feffff           call 0x647c00
// 00647dfc  83c408               add esp, 8
// 00647dff  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
