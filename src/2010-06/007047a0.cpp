// roc 2010-06 007047a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007047a0
//
// 007047a0  68e03d7000           push 0x703de0
// 007047a5  686427c200           push 0xc22764
// 007047aa  e8e1cecfff           call 0x401690
// 007047af  83c408               add esp, 8
// 007047b2  e909f4ffff           jmp 0x703bc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
