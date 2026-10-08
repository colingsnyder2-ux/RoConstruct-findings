// roc 2007-08 00595880  unit: RBX::RocketTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00595880
//
// 00595880  68f04d8c00           push 0x8c4df0
// 00595885  68903d5900           push 0x593d90
// 0059588a  e891fc1800           call 0x725520
// 0059588f  83c408               add esp, 8
// 00595892  e989dfffff           jmp 0x593820
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
