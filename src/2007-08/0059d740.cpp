// roc 2007-08 0059d740  unit: RBX::VHopperBin::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059d740
//
// 0059d740  688cdc8b00           push 0x8bdc8c
// 0059d745  68f0784800           push 0x4878f0
// 0059d74a  e8d17d1800           call 0x725520
// 0059d74f  83c408               add esp, 8
// 0059d752  e99994eeff           jmp 0x486bf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
