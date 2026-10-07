// roc 2012-06 008eeb90  unit: RBX::VAdvLuaDragger::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008eeb90
//
// 008eeb90  56                   push esi
// 008eeb91  8b31                 mov esi, dword ptr [ecx]
// 008eeb93  85f6                 test esi, esi
// 008eeb95  7410                 je 0x8eeba7
// 008eeb97  8bce                 mov ecx, esi
// 008eeb99  e8f2dc0600           call 0x95c890
// 008eeb9e  56                   push esi
// 008eeb9f  e870350900           call 0x982114
// 008eeba4  83c404               add esp, 4
// 008eeba7  5e                   pop esi
// 008eeba8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
