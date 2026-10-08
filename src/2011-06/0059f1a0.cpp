// from server: 100% by auto
// roc 2011-06 0059f1a0  unit: RBX::P8NetworkSettings::?$GetSetImpl  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059f1a0
//
// 0059f1a0  56                   push esi
// 0059f1a1  8b31                 mov esi, dword ptr [ecx]
// 0059f1a3  85f6                 test esi, esi
// 0059f1a5  7410                 je 0x59f1b7
// 0059f1a7  8bce                 mov ecx, esi
// 0059f1a9  e8a2131400           call 0x6e0550
// 0059f1ae  56                   push esi
// 0059f1af  e8a4ae2600           call 0x80a058
// 0059f1b4  83c404               add esp, 4
// 0059f1b7  5e                   pop esi
// 0059f1b8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
