// roc 2009-06 004c73c0  unit: RBX::VInstance::?$NonFactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c73c0
//
// 004c73c0  56                   push esi
// 004c73c1  8b31                 mov esi, dword ptr [ecx]
// 004c73c3  85f6                 test esi, esi
// 004c73c5  7410                 je 0x4c73d7
// 004c73c7  8bce                 mov ecx, esi
// 004c73c9  e862dcffff           call 0x4c5030
// 004c73ce  56                   push esi
// 004c73cf  e85e162500           call 0x718a32
// 004c73d4  83c404               add esp, 4
// 004c73d7  5e                   pop esi
// 004c73d8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
