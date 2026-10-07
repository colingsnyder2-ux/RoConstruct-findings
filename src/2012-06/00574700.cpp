// roc 2012-06 00574700  unit: AsyncResult  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00574700
//
// 00574700  56                   push esi
// 00574701  8b31                 mov esi, dword ptr [ecx]
// 00574703  85f6                 test esi, esi
// 00574705  7410                 je 0x574717
// 00574707  8bce                 mov ecx, esi
// 00574709  e852adf3ff           call 0x4af460
// 0057470e  56                   push esi
// 0057470f  e800da4000           call 0x982114
// 00574714  83c404               add esp, 4
// 00574717  5e                   pop esi
// 00574718  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
