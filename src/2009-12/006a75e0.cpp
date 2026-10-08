// roc 2009-12 006a75e0  unit: RBX::VScriptContext::?$BoundFuncDesc  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a75e0
//
// 006a75e0  56                   push esi
// 006a75e1  8b31                 mov esi, dword ptr [ecx]
// 006a75e3  85f6                 test esi, esi
// 006a75e5  7410                 je 0x6a75f7
// 006a75e7  8bce                 mov ecx, esi
// 006a75e9  e882f1ffff           call 0x6a6770
// 006a75ee  56                   push esi
// 006a75ef  e866c21400           call 0x7f385a
// 006a75f4  83c404               add esp, 4
// 006a75f7  5e                   pop esi
// 006a75f8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
