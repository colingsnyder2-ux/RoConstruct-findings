// from server: 100% by auto
// roc 2007-08 004cf820  unit: 0RBX::View  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cf820
//
// 004cf820  56                   push esi
// 004cf821  8b31                 mov esi, dword ptr [ecx]
// 004cf823  85f6                 test esi, esi
// 004cf825  7410                 je 0x4cf837
// 004cf827  8bce                 mov ecx, esi
// 004cf829  e892feffff           call 0x4cf6c0
// 004cf82e  56                   push esi
// 004cf82f  e82e041600           call 0x62fc62
// 004cf834  83c404               add esp, 4
// 004cf837  5e                   pop esi
// 004cf838  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
