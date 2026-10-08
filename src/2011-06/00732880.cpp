// roc 2011-06 00732880  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00732880
//
// 00732880  68f0d06800           push 0x68d0f0
// 00732885  68d4f3cc00           push 0xccf3d4
// 0073288a  e881edccff           call 0x401610
// 0073288f  83c408               add esp, 8
// 00732892  e989a6f5ff           jmp 0x68cf20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
