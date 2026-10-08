// roc 2011-06 0062dd50  unit: RBX::VWidget::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062dd50
//
// 0062dd50  68a0d56200           push 0x62d5a0
// 0062dd55  6800c0cc00           push 0xccc000
// 0062dd5a  e8b138ddff           call 0x401610
// 0062dd5f  83c408               add esp, 8
// 0062dd62  e989f7ffff           jmp 0x62d4f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
