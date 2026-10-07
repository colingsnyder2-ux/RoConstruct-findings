// roc 2012-06 0072cea0  unit: RBX::Accoutrement  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0072cea0
//
// 0072cea0  8b442404             mov eax, dword ptr [esp + 4]
// 0072cea4  6a00                 push 0
// 0072cea6  50                   push eax
// 0072cea7  e8b4fbffff           call 0x72ca60
// 0072ceac  83c408               add esp, 8
// 0072ceaf  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
