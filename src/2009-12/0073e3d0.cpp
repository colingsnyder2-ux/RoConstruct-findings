// roc 2009-12 0073e3d0  unit: RBX::VConfiguration::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073e3d0
//
// 0073e3d0  68e0986400           push 0x6498e0
// 0073e3d5  68cc5fb800           push 0xb85fcc
// 0073e3da  e85132ccff           call 0x401630
// 0073e3df  83c408               add esp, 8
// 0073e3e2  e9199ef0ff           jmp 0x648200
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
