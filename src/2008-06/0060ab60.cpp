// roc 2008-06 0060ab60  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060ab60
//
// 0060ab60  680cba9700           push 0x97ba0c
// 0060ab65  68e0a26000           push 0x60a2e0
// 0060ab6a  e8c1c7f4ff           call 0x557330
// 0060ab6f  83c408               add esp, 8
// 0060ab72  e9e9f0ffff           jmp 0x609c60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
