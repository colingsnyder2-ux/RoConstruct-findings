// roc 2010-06 006969b0  unit: RBX::VJointInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006969b0
//
// 006969b0  6880696900           push 0x696980
// 006969b5  68a0e6c100           push 0xc1e6a0
// 006969ba  e8d1acd6ff           call 0x401690
// 006969bf  83c408               add esp, 8
// 006969c2  e929ffffff           jmp 0x6968f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
