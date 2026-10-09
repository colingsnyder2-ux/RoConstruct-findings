// roc 2009-12 00752e30  unit: RBX::VSurfaceSelection::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00752e30
//
// 00752e30  68809a6400           push 0x649a80
// 00752e35  683460b800           push 0xb86034
// 00752e3a  e8f1e7caff           call 0x401630
// 00752e3f  83c408               add esp, 8
// 00752e42  e9195fefff           jmp 0x648d60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
