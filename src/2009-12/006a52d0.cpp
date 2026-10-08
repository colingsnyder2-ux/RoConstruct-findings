// roc 2009-12 006a52d0  unit: RBX::VScriptContext::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a52d0
//
// 006a52d0  56                   push esi
// 006a52d1  8b31                 mov esi, dword ptr [ecx]
// 006a52d3  85f6                 test esi, esi
// 006a52d5  7410                 je 0x6a52e7
// 006a52d7  8bce                 mov ecx, esi
// 006a52d9  e812f8ffff           call 0x6a4af0
// 006a52de  56                   push esi
// 006a52df  e876e51400           call 0x7f385a
// 006a52e4  83c404               add esp, 4
// 006a52e7  5e                   pop esi
// 006a52e8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
