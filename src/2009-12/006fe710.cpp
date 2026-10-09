// roc 2009-12 006fe710  unit: RBX::VSkin::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006fe710
//
// 006fe710  6810694f00           push 0x4f6910
// 006fe715  6878deb700           push 0xb7de78
// 006fe71a  e8112fd0ff           call 0x401630
// 006fe71f  83c408               add esp, 8
// 006fe722  e95974dfff           jmp 0x4f5b80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
