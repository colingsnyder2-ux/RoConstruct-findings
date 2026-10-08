// roc 2007-08 00594c50  unit: RBX::OscillateMotorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594c50
//
// 00594c50  68dc4d8c00           push 0x8c4ddc
// 00594c55  68403d5900           push 0x593d40
// 00594c5a  e8c1081900           call 0x725520
// 00594c5f  83c408               add esp, 8
// 00594c62  e989e9ffff           jmp 0x5935f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
