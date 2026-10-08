// roc 2009-06 004d51f0  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d51f0
//
// 004d51f0  6820484b00           push 0x4b4820
// 004d51f5  68dcd4a300           push 0xa3d4dc
// 004d51fa  e811c5f2ff           call 0x401710
// 004d51ff  83c408               add esp, 8
// 004d5202  e969e7fdff           jmp 0x4b3970
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
