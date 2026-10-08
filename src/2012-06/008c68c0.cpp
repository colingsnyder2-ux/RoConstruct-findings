// from server: 100% by auto
// roc 2012-06 008c68c0  unit: RBX::VVirtualUser::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c68c0
//
// 008c68c0  56                   push esi
// 008c68c1  8b31                 mov esi, dword ptr [ecx]
// 008c68c3  85f6                 test esi, esi
// 008c68c5  7410                 je 0x8c68d7
// 008c68c7  8bce                 mov ecx, esi
// 008c68c9  e89227beff           call 0x4a9060
// 008c68ce  56                   push esi
// 008c68cf  e840b80b00           call 0x982114
// 008c68d4  83c404               add esp, 4
// 008c68d7  5e                   pop esi
// 008c68d8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
