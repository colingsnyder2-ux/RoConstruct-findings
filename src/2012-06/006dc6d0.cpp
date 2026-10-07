// roc 2012-06 006dc6d0  unit: RBX::DataModel::W4GearType::?$EnumDesc  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006dc6d0
//
// 006dc6d0  56                   push esi
// 006dc6d1  8b31                 mov esi, dword ptr [ecx]
// 006dc6d3  85f6                 test esi, esi
// 006dc6d5  7410                 je 0x6dc6e7
// 006dc6d7  8bce                 mov ecx, esi
// 006dc6d9  e802c7ffff           call 0x6d8de0
// 006dc6de  56                   push esi
// 006dc6df  e8305a2a00           call 0x982114
// 006dc6e4  83c404               add esp, 4
// 006dc6e7  5e                   pop esi
// 006dc6e8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
