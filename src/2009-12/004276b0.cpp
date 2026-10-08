// roc 2009-12 004276b0  unit: boost::any::H::?$holder  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004276b0
//
// 004276b0  56                   push esi
// 004276b1  8b31                 mov esi, dword ptr [ecx]
// 004276b3  85f6                 test esi, esi
// 004276b5  7410                 je 0x4276c7
// 004276b7  8bce                 mov ecx, esi
// 004276b9  e872fcffff           call 0x427330
// 004276be  56                   push esi
// 004276bf  e896c13c00           call 0x7f385a
// 004276c4  83c404               add esp, 4
// 004276c7  5e                   pop esi
// 004276c8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
