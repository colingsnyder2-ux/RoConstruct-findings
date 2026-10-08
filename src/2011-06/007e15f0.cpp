// roc 2011-06 007e15f0  unit: RBX::CloneTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007e15f0
//
// 007e15f0  6860627800           push 0x786260
// 007e15f5  683c54cd00           push 0xcd543c
// 007e15fa  e81100c2ff           call 0x401610
// 007e15ff  83c408               add esp, 8
// 007e1602  e99946faff           jmp 0x785ca0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
