// roc 2012-06 0073bd60  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0073bd60
//
// 0073bd60  6800b77300           push 0x73b700
// 0073bd65  68f44be300           push 0xe34bf4
// 0073bd6a  e83158ccff           call 0x4015a0
// 0073bd6f  83c408               add esp, 8
// 0073bd72  e9d9f4ffff           jmp 0x73b250
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
