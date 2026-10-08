// roc 2011-06 007e1310  unit: RBX::GrabTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007e1310
//
// 007e1310  6850627800           push 0x786250
// 007e1315  683854cd00           push 0xcd5438
// 007e131a  e8f102c2ff           call 0x401610
// 007e131f  83c408               add esp, 8
// 007e1322  e90949faff           jmp 0x785c30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
