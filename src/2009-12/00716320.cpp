// roc 2009-12 00716320  unit: RBX::VRotateV::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00716320
//
// 00716320  6800895300           push 0x538900
// 00716325  68e005b800           push 0xb805e0
// 0071632a  e801b3ceff           call 0x401630
// 0071632f  83c408               add esp, 8
// 00716332  e99916e2ff           jmp 0x5379d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
