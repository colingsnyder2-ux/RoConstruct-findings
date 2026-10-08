// roc 2011-06 00679150  unit: RBX::VSpecialShape::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00679150
//
// 00679150  6860164700           push 0x471660
// 00679155  68683ecb00           push 0xcb3e68
// 0067915a  e8b184d8ff           call 0x401610
// 0067915f  83c408               add esp, 8
// 00679162  e94968dfff           jmp 0x46f9b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
