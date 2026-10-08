// roc 2007-08 005950b0  unit: RBX::FillTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005950b0
//
// 005950b0  68b04d8c00           push 0x8c4db0
// 005950b5  68903c5900           push 0x593c90
// 005950ba  e861041900           call 0x725520
// 005950bf  83c408               add esp, 8
// 005950c2  e959e0ffff           jmp 0x593120
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
