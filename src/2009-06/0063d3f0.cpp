// roc 2009-06 0063d3f0  unit: RBX::VHat::?$FactoryProduct  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0063d3f0
//
// 0063d3f0  8b442404             mov eax, dword ptr [esp + 4]
// 0063d3f4  6a00                 push 0
// 0063d3f6  50                   push eax
// 0063d3f7  e8a4feffff           call 0x63d2a0
// 0063d3fc  83c408               add esp, 8
// 0063d3ff  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
