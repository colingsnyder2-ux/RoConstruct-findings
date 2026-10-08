// roc 2009-12 0075d230  unit: RBX::VLuaDragger::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075d230
//
// 0075d230  56                   push esi
// 0075d231  8b31                 mov esi, dword ptr [ecx]
// 0075d233  85f6                 test esi, esi
// 0075d235  7410                 je 0x75d247
// 0075d237  8bce                 mov ecx, esi
// 0075d239  e802100600           call 0x7be240
// 0075d23e  56                   push esi
// 0075d23f  e816660900           call 0x7f385a
// 0075d244  83c404               add esp, 4
// 0075d247  5e                   pop esi
// 0075d248  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
