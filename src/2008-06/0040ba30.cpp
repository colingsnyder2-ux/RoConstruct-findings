// roc 2008-06 0040ba30  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ba30
//
// 0040ba30  68d0c69600           push 0x96c6d0
// 0040ba35  6800b84000           push 0x40b800
// 0040ba3a  e8f1b81400           call 0x557330
// 0040ba3f  83c408               add esp, 8
// 0040ba42  e949fdffff           jmp 0x40b790
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
