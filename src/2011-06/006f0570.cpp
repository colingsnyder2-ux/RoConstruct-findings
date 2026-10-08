// roc 2011-06 006f0570  unit: RBX::VCharacterMesh::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f0570
//
// 006f0570  6860125c00           push 0x5c1260
// 006f0575  68a4e5cb00           push 0xcbe5a4
// 006f057a  e89110d1ff           call 0x401610
// 006f057f  83c408               add esp, 8
// 006f0582  e9a9f1ecff           jmp 0x5bf730
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
