// from server: 100% by auto
// roc 2011-06 0071db00  unit: RBX::VAdvLuaDragger::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071db00
//
// 0071db00  56                   push esi
// 0071db01  8b31                 mov esi, dword ptr [ecx]
// 0071db03  85f6                 test esi, esi
// 0071db05  7410                 je 0x71db17
// 0071db07  8bce                 mov ecx, esi
// 0071db09  e812040a00           call 0x7bdf20
// 0071db0e  56                   push esi
// 0071db0f  e844c50e00           call 0x80a058
// 0071db14  83c404               add esp, 4
// 0071db17  5e                   pop esi
// 0071db18  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
