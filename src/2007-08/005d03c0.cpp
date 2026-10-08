// roc 2007-08 005d03c0  unit: RBX::VLocalBackpack::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d03c0
//
// 005d03c0  68101f8c00           push 0x8c1f10
// 005d03c5  68f0865500           push 0x5586f0
// 005d03ca  e851511500           call 0x725520
// 005d03cf  83c408               add esp, 8
// 005d03d2  e9a973f8ff           jmp 0x557780
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
