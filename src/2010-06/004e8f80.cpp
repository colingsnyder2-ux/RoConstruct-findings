// roc 2010-06 004e8f80  unit: G3D::VRay::?$holder  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e8f80
//
// 004e8f80  56                   push esi
// 004e8f81  8b31                 mov esi, dword ptr [ecx]
// 004e8f83  85f6                 test esi, esi
// 004e8f85  7410                 je 0x4e8f97
// 004e8f87  8bce                 mov ecx, esi
// 004e8f89  e8b2a9f2ff           call 0x413940
// 004e8f8e  56                   push esi
// 004e8f8f  e806ea2b00           call 0x7a799a
// 004e8f94  83c404               add esp, 4
// 004e8f97  5e                   pop esi
// 004e8f98  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
