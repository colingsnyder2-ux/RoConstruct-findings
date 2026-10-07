// roc 2009-06 00634300  unit: RBX::VScriptContext::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634300
//
// 00634300  56                   push esi
// 00634301  8b31                 mov esi, dword ptr [ecx]
// 00634303  85f6                 test esi, esi
// 00634305  7410                 je 0x634317
// 00634307  8bce                 mov ecx, esi
// 00634309  e892590d00           call 0x709ca0
// 0063430e  56                   push esi
// 0063430f  e81e470e00           call 0x718a32
// 00634314  83c404               add esp, 4
// 00634317  5e                   pop esi
// 00634318  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
