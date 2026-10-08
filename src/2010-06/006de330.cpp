// roc 2010-06 006de330  unit: RBX::VFrame::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006de330
//
// 006de330  68f0c55a00           push 0x5ac5f0
// 006de335  683cc2c000           push 0xc0c23c
// 006de33a  e85133d2ff           call 0x401690
// 006de33f  83c408               add esp, 8
// 006de342  e919d7ecff           jmp 0x5aba60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
