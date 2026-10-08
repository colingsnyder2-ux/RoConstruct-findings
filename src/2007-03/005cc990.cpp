// roc 2007-03 005cc990  unit: seg_005c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005cc990
//
// 005cc990  688cc28b00           push 0x8bc28c
// 005cc995  68205e5500           push 0x555e20
// 005cc99a  e8b19e1500           call 0x726850
// 005cc99f  83c408               add esp, 8
// 005cc9a2  e94987f8ff           jmp 0x5550f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
