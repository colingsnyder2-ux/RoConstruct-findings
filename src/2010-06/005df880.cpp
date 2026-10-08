// roc 2010-06 005df880  unit: RBX::VServiceProvider::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005df880
//
// 005df880  6870f85d00           push 0x5df870
// 005df885  68a092c100           push 0xc192a0
// 005df88a  e8011ee2ff           call 0x401690
// 005df88f  83c408               add esp, 8
// 005df892  e969ffffff           jmp 0x5df800
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
