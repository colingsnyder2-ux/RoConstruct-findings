// roc 2007-08 005cad90  unit: seg_005c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cad90
//
// 005cad90  8b442404             mov eax, dword ptr [esp + 4]
// 005cad94  68a09f7b00           push 0x7b9fa0
// 005cad99  50                   push eax
// 005cad9a  e8413bffff           call 0x5be8e0
// 005cad9f  83c408               add esp, 8
// 005cada2  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _gfind_nodef)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
