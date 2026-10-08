// roc 2007-08 0057be90  unit: RBX::VRootInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057be90
//
// 0057be90  6888dc8b00           push 0x8bdc88
// 0057be95  68e0784800           push 0x4878e0
// 0057be9a  e881961a00           call 0x725520
// 0057be9f  83c408               add esp, 8
// 0057bea2  e9c9acf0ff           jmp 0x486b70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
