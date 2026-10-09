// roc 2009-12 0071c100  unit: RBX::VSky::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071c100
//
// 0071c100  68b0515700           push 0x5751b0
// 0071c105  683027b800           push 0xb82730
// 0071c10a  e82155ceff           call 0x401630
// 0071c10f  83c408               add esp, 8
// 0071c112  e9998ee5ff           jmp 0x574fb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
