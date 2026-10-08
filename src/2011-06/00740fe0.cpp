// roc 2011-06 00740fe0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00740fe0
//
// 00740fe0  68e00e7400           push 0x740ee0
// 00740fe5  68844ecd00           push 0xcd4e84
// 00740fea  e82106ccff           call 0x401610
// 00740fef  83c408               add esp, 8
// 00740ff2  e9e9fdffff           jmp 0x740de0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
