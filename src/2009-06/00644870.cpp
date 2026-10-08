// roc 2009-06 00644870  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00644870
//
// 00644870  68e0214300           push 0x4321e0
// 00644875  6808a3a300           push 0xa3a308
// 0064487a  e891cedbff           call 0x401710
// 0064487f  83c408               add esp, 8
// 00644882  e979cedeff           jmp 0x431700
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
