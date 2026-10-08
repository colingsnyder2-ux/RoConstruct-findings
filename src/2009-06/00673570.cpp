// roc 2009-06 00673570  unit: RBX::VSkin::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00673570
//
// 00673570  68c0484b00           push 0x4b48c0
// 00673575  6804d5a300           push 0xa3d504
// 0067357a  e891e1d8ff           call 0x401710
// 0067357f  83c408               add esp, 8
// 00673582  e94908e4ff           jmp 0x4b3dd0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
