// roc 2009-06 00671630  unit: RBX::VBackpack::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00671630
//
// 00671630  6850484b00           push 0x4b4850
// 00671635  68e8d4a300           push 0xa3d4e8
// 0067163a  e8d100d9ff           call 0x401710
// 0067163f  83c408               add esp, 8
// 00671642  e97924e4ff           jmp 0x4b3ac0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
