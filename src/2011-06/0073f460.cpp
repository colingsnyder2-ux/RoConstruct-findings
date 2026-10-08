// roc 2011-06 0073f460  unit: RBX::VGuiObject::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0073f460
//
// 0073f460  6850f47300           push 0x73f450
// 0073f465  689c4ccd00           push 0xcd4c9c
// 0073f46a  e8a121ccff           call 0x401610
// 0073f46f  83c408               add esp, 8
// 0073f472  e969ffffff           jmp 0x73f3e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
