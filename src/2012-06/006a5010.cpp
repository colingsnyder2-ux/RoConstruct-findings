// roc 2012-06 006a5010  unit: RBX::VScriptContext::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a5010
//
// 006a5010  56                   push esi
// 006a5011  8b31                 mov esi, dword ptr [ecx]
// 006a5013  85f6                 test esi, esi
// 006a5015  7410                 je 0x6a5027
// 006a5017  8bce                 mov ecx, esi
// 006a5019  e8b2d40e00           call 0x7924d0
// 006a501e  56                   push esi
// 006a501f  e8f0d02d00           call 0x982114
// 006a5024  83c404               add esp, 4
// 006a5027  5e                   pop esi
// 006a5028  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
