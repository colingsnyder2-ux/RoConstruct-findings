// roc 2007-08 00594aa0  unit: RBX::RightMotorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594aa0
//
// 00594aa0  68d44d8c00           push 0x8c4dd4
// 00594aa5  68203d5900           push 0x593d20
// 00594aaa  e8710a1900           call 0x725520
// 00594aaf  83c408               add esp, 8
// 00594ab2  e959eaffff           jmp 0x593510
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
