// roc 2009-06 0052b180  unit: RBX::VCylinderMesh::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0052b180
//
// 0052b180  6870ad5200           push 0x52ad70
// 0052b185  685819a400           push 0xa41958
// 0052b18a  e88165edff           call 0x401710
// 0052b18f  83c408               add esp, 8
// 0052b192  e9a9f0ffff           jmp 0x52a240
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
