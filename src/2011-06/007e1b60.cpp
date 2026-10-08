// roc 2011-06 007e1b60  unit: RBX::GameTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007e1b60
//
// 007e1b60  6880627800           push 0x786280
// 007e1b65  684454cd00           push 0xcd5444
// 007e1b6a  e8a1fac1ff           call 0x401610
// 007e1b6f  83c408               add esp, 8
// 007e1b72  e90942faff           jmp 0x785d80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
