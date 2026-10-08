// roc 2011-06 007483b0  unit: RBX::VRelativePanel::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007483b0
//
// 007483b0  6800837400           push 0x748300
// 007483b5  683c50cd00           push 0xcd503c
// 007483ba  e85192cbff           call 0x401610
// 007483bf  83c408               add esp, 8
// 007483c2  e9c9feffff           jmp 0x748290
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
