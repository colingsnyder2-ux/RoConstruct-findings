// roc 2007-08 005d03a0  unit: RBX::VLocalBackpackItem::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d03a0
//
// 005d03a0  680c1f8c00           push 0x8c1f0c
// 005d03a5  68e0865500           push 0x5586e0
// 005d03aa  e871511500           call 0x725520
// 005d03af  83c408               add esp, 8
// 005d03b2  e95973f8ff           jmp 0x557710
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
