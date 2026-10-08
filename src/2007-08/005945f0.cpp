// roc 2007-08 005945f0  unit: RBX::WeldTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005945f0
//
// 005945f0  68c44d8c00           push 0x8c4dc4
// 005945f5  68e03c5900           push 0x593ce0
// 005945fa  e8210f1900           call 0x725520
// 005945ff  83c408               add esp, 8
// 00594602  e949edffff           jmp 0x593350
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
