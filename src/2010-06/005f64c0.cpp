// roc 2010-06 005f64c0  unit: RBX::VWidget::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f64c0
//
// 005f64c0  68a05a5f00           push 0x5f5aa0
// 005f64c5  688897c100           push 0xc19788
// 005f64ca  e8c1b1e0ff           call 0x401690
// 005f64cf  83c408               add esp, 8
// 005f64d2  e929f5ffff           jmp 0x5f5a00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
