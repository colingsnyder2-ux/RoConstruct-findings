// roc 2010-06 006e3c80  unit: RBX::VLuaDragger::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e3c80
//
// 006e3c80  56                   push esi
// 006e3c81  8b31                 mov esi, dword ptr [ecx]
// 006e3c83  85f6                 test esi, esi
// 006e3c85  7410                 je 0x6e3c97
// 006e3c87  8bce                 mov ecx, esi
// 006e3c89  e8421b0800           call 0x7657d0
// 006e3c8e  56                   push esi
// 006e3c8f  e8063d0c00           call 0x7a799a
// 006e3c94  83c404               add esp, 4
// 006e3c97  5e                   pop esi
// 006e3c98  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
