// roc 2010-06 006f4490  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f4490
//
// 006f4490  6850d15c00           push 0x5cd150
// 006f4495  683091c100           push 0xc19130
// 006f449a  e8f1d1d0ff           call 0x401690
// 006f449f  83c408               add esp, 8
// 006f44a2  e97983edff           jmp 0x5cc820
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
