// roc 2010-06 00619850  unit: RBX::VHat::?$FactoryProduct  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00619850
//
// 00619850  8b442404             mov eax, dword ptr [esp + 4]
// 00619854  6a00                 push 0
// 00619856  50                   push eax
// 00619857  e8a4feffff           call 0x619700
// 0061985c  83c408               add esp, 8
// 0061985f  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
