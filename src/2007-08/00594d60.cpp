// roc 2007-08 00594d60  unit: RBX::ModelSetFrontTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594d60
//
// 00594d60  68e04d8c00           push 0x8c4de0
// 00594d65  68503d5900           push 0x593d50
// 00594d6a  e8b1071900           call 0x725520
// 00594d6f  83c408               add esp, 8
// 00594d72  e9e9e8ffff           jmp 0x593660
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
