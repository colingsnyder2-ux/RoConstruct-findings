// roc 2007-08 00594b90  unit: RBX::LeftMotorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594b90
//
// 00594b90  68d84d8c00           push 0x8c4dd8
// 00594b95  68303d5900           push 0x593d30
// 00594b9a  e881091900           call 0x725520
// 00594b9f  83c408               add esp, 8
// 00594ba2  e9d9e9ffff           jmp 0x593580
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
