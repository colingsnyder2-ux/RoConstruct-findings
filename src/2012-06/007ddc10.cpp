// roc 2012-06 007ddc10  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007ddc10
//
// 007ddc10  68e0d15100           push 0x51d1e0
// 007ddc15  6884e1e100           push 0xe1e184
// 007ddc1a  e88139c2ff           call 0x4015a0
// 007ddc1f  83c408               add esp, 8
// 007ddc22  e989e1d3ff           jmp 0x51bdb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
