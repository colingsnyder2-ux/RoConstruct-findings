// roc 2011-06 00717e00  unit: RBX::VFrame::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00717e00
//
// 00717e00  68f0145c00           push 0x5c14f0
// 00717e05  6848e6cb00           push 0xcbe648
// 00717e0a  e80198ceff           call 0x401610
// 00717e0f  83c408               add esp, 8
// 00717e12  e9098beaff           jmp 0x5c0920
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
