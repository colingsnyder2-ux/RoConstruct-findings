// roc 2009-06 004bc670  unit: RBX::VShirt::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bc670
//
// 004bc670  68a0484b00           push 0x4b48a0
// 004bc675  68fcd4a300           push 0xa3d4fc
// 004bc67a  e89150f4ff           call 0x401710
// 004bc67f  83c408               add esp, 8
// 004bc682  e96976ffff           jmp 0x4b3cf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
