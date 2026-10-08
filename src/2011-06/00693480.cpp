// roc 2011-06 00693480  unit: RBX::VSkin::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00693480
//
// 00693480  6850594a00           push 0x4a5950
// 00693485  68fc53cb00           push 0xcb53fc
// 0069348a  e881e1d6ff           call 0x401610
// 0069348f  83c408               add esp, 8
// 00693492  e9d90ce1ff           jmp 0x4a4170
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
