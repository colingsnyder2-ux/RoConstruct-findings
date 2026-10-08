// roc 2010-06 0069cca0  unit: RBX::PART::VWedge::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069cca0
//
// 0069cca0  68d0cd5200           push 0x52cdd0
// 0069cca5  68fc8bc000           push 0xc08bfc
// 0069ccaa  e8e149d6ff           call 0x401690
// 0069ccaf  83c408               add esp, 8
// 0069ccb2  e949f5e8ff           jmp 0x52c200
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
