// roc 2011-06 006fe940  unit: RBX::VForceField::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fe940
//
// 006fe940  6890135c00           push 0x5c1390
// 006fe945  68f0e5cb00           push 0xcbe5f0
// 006fe94a  e8c12cd0ff           call 0x401610
// 006fe94f  83c408               add esp, 8
// 006fe952  e92916ecff           jmp 0x5bff80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
