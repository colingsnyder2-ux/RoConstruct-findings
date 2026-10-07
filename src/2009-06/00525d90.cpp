// roc 2009-06 00525d90  unit: RBX::ViewRbxGfx  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00525d90
//
// 00525d90  56                   push esi
// 00525d91  8b31                 mov esi, dword ptr [ecx]
// 00525d93  85f6                 test esi, esi
// 00525d95  7410                 je 0x525da7
// 00525d97  8bce                 mov ecx, esi
// 00525d99  e8a2feffff           call 0x525c40
// 00525d9e  56                   push esi
// 00525d9f  e88e2c1f00           call 0x718a32
// 00525da4  83c404               add esp, 4
// 00525da7  5e                   pop esi
// 00525da8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
