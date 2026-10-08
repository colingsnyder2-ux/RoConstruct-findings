// from server: 100% by auto
// roc 2011-06 0071db20  unit: RBX::VAdvLuaDragger::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071db20
//
// 0071db20  56                   push esi
// 0071db21  8b31                 mov esi, dword ptr [ecx]
// 0071db23  85f6                 test esi, esi
// 0071db25  7410                 je 0x71db37
// 0071db27  8bce                 mov ecx, esi
// 0071db29  e8b2440a00           call 0x7c1fe0
// 0071db2e  56                   push esi
// 0071db2f  e824c50e00           call 0x80a058
// 0071db34  83c404               add esp, 4
// 0071db37  5e                   pop esi
// 0071db38  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
