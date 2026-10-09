// roc 2009-12 006ded80  unit: RBX::VExtrudedPartInstance::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ded80
//
// 006ded80  68602d4600           push 0x462d60
// 006ded85  68d4b9b700           push 0xb7b9d4
// 006ded8a  e8a128d2ff           call 0x401630
// 006ded8f  83c408               add esp, 8
// 006ded92  e92931d8ff           jmp 0x461ec0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
