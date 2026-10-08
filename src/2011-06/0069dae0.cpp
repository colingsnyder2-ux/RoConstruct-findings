// roc 2011-06 0069dae0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0069dae0
//
// 0069dae0  68c0594a00           push 0x4a59c0
// 0069dae5  681854cb00           push 0xcb5418
// 0069daea  e8213bd6ff           call 0x401610
// 0069daef  83c408               add esp, 8
// 0069daf2  e98969e0ff           jmp 0x4a4480
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
