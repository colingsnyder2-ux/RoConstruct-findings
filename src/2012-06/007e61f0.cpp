// roc 2012-06 007e61f0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e61f0
//
// 007e61f0  6880607e00           push 0x7e6080
// 007e61f5  68f4e9e400           push 0xe4e9f4
// 007e61fa  e8a1b3c1ff           call 0x4015a0
// 007e61ff  83c408               add esp, 8
// 007e6202  e909feffff           jmp 0x7e6010
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
