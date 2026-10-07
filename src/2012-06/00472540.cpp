// roc 2012-06 00472540  unit: CRobloxApp  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00472540
//
// 00472540  56                   push esi
// 00472541  8b31                 mov esi, dword ptr [ecx]
// 00472543  85f6                 test esi, esi
// 00472545  7410                 je 0x472557
// 00472547  8bce                 mov ecx, esi
// 00472549  e872d5ffff           call 0x46fac0
// 0047254e  56                   push esi
// 0047254f  e8c0fb5000           call 0x982114
// 00472554  83c404               add esp, 4
// 00472557  5e                   pop esi
// 00472558  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
