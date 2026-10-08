// roc 2011-06 0063a2f0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063a2f0
//
// 0063a2f0  68a0946300           push 0x6394a0
// 0063a2f5  6824cbcc00           push 0xcccb24
// 0063a2fa  e81173dcff           call 0x401610
// 0063a2ff  83c408               add esp, 8
// 0063a302  e919efffff           jmp 0x639220
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
