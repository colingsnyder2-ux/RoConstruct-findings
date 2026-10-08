// roc 2007-08 0054a670  unit: RBX::VServiceProvider::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054a670
//
// 0054a670  683c1c8c00           push 0x8c1c3c
// 0054a675  6860a65400           push 0x54a660
// 0054a67a  e8a1ae1d00           call 0x725520
// 0054a67f  83c408               add esp, 8
// 0054a682  e969ffffff           jmp 0x54a5f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
