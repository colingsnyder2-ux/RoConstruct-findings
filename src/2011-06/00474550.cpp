// from server: 100% by auto
// roc 2011-06 00474550  unit: CRobloxDoc  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00474550
//
// 00474550  56                   push esi
// 00474551  8b31                 mov esi, dword ptr [ecx]
// 00474553  85f6                 test esi, esi
// 00474555  7410                 je 0x474567
// 00474557  8bce                 mov ecx, esi
// 00474559  e8c2eeffff           call 0x473420
// 0047455e  56                   push esi
// 0047455f  e8f45a3900           call 0x80a058
// 00474564  83c404               add esp, 4
// 00474567  5e                   pop esi
// 00474568  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
