// roc 2012-06 006a74b0  unit: RBX::VScriptContext::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a74b0
//
// 006a74b0  56                   push esi
// 006a74b1  8b31                 mov esi, dword ptr [ecx]
// 006a74b3  85f6                 test esi, esi
// 006a74b5  7410                 je 0x6a74c7
// 006a74b7  8bce                 mov ecx, esi
// 006a74b9  e8b2e4ffff           call 0x6a5970
// 006a74be  56                   push esi
// 006a74bf  e850ac2d00           call 0x982114
// 006a74c4  83c404               add esp, 4
// 006a74c7  5e                   pop esi
// 006a74c8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
