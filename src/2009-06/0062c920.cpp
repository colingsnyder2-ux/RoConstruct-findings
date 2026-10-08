// roc 2009-06 0062c920  unit: RBX::VRootInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062c920
//
// 0062c920  6840484b00           push 0x4b4840
// 0062c925  68e4d4a300           push 0xa3d4e4
// 0062c92a  e8e14dddff           call 0x401710
// 0062c92f  83c408               add esp, 8
// 0062c932  e91971e8ff           jmp 0x4b3a50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
