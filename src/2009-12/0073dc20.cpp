// roc 2009-12 0073dc20  unit: RBX::VClickDetector::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073dc20
//
// 0073dc20  68d0986400           push 0x6498d0
// 0073dc25  68c85fb800           push 0xb85fc8
// 0073dc2a  e8013accff           call 0x401630
// 0073dc2f  83c408               add esp, 8
// 0073dc32  e959a5f0ff           jmp 0x648190
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
