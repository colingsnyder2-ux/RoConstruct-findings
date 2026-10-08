// roc 2007-08 00595750  unit: RBX::SlingshotTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00595750
//
// 00595750  68ec4d8c00           push 0x8c4dec
// 00595755  68803d5900           push 0x593d80
// 0059575a  e8c1fd1800           call 0x725520
// 0059575f  83c408               add esp, 8
// 00595762  e949e0ffff           jmp 0x5937b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
