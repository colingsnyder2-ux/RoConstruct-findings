// roc 2010-06 006d2480  unit: RBX::VSelectionBox::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d2480
//
// 006d2480  6840c55a00           push 0x5ac540
// 006d2485  6810c2c000           push 0xc0c210
// 006d248a  e801f2d2ff           call 0x401690
// 006d248f  83c408               add esp, 8
// 006d2492  e9f990edff           jmp 0x5ab590
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
