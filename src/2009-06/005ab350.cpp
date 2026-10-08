// from server: 100% by auto
// roc 2009-06 005ab350  unit: RBX::Mesh  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ab350
//
// 005ab350  55                   push ebp
// 005ab351  8bec                 mov ebp, esp
// 005ab353  8b4508               mov eax, dword ptr [ebp + 8]
// 005ab356  50                   push eax
// 005ab357  e804f3ffff           call 0x5aa660
// 005ab35c  83c404               add esp, 4
// 005ab35f  5d                   pop ebp
// 005ab360  c3                   ret 
// library lua-5.1.4/lstate.c (function _callallgcTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Oy- /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
