// roc 2008-06 005c6ee0  unit: RBX::LeftMotorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c6ee0
//
// 005c6ee0  6868969700           push 0x979668
// 005c6ee5  6850615c00           push 0x5c6150
// 005c6eea  e84104f9ff           call 0x557330
// 005c6eef  83c408               add esp, 8
// 005c6ef2  e989eaffff           jmp 0x5c5980
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
