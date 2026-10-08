// from server: 100% by auto
// roc 2010-06 00612410  unit: RBX::VScriptContext::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00612410
//
// 00612410  56                   push esi
// 00612411  8b31                 mov esi, dword ptr [ecx]
// 00612413  85f6                 test esi, esi
// 00612415  7410                 je 0x612427
// 00612417  8bce                 mov ecx, esi
// 00612419  e892f3ffff           call 0x6117b0
// 0061241e  56                   push esi
// 0061241f  e876551900           call 0x7a799a
// 00612424  83c404               add esp, 4
// 00612427  5e                   pop esi
// 00612428  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
