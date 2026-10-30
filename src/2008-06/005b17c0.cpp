// from server: 100% by auto
// roc 2008-06 005b17c0  unit: RBX::VHat::?$FactoryProduct  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b17c0
//
// 005b17c0  8b442404             mov eax, dword ptr [esp + 4]
// 005b17c4  6a00                 push 0
// 005b17c6  50                   push eax
// 005b17c7  e814feffff           call 0x5b15e0
// 005b17cc  83c408               add esp, 8
// 005b17cf  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
