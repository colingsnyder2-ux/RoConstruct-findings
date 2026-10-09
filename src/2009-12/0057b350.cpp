// roc 2009-12 0057b350  unit: RBX::VCylinderMesh::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0057b350
//
// 0057b350  68607c5700           push 0x577c60
// 0057b355  687827b800           push 0xb82778
// 0057b35a  e8d162e8ff           call 0x401630
// 0057b35f  83c408               add esp, 8
// 0057b362  e929c5ffff           jmp 0x577890
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
