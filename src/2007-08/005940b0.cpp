// roc 2007-08 005940b0  unit: RBX::ResizeTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005940b0
//
// 005940b0  68f44d8c00           push 0x8c4df4
// 005940b5  68a03d5900           push 0x593da0
// 005940ba  e861141900           call 0x725520
// 005940bf  83c408               add esp, 8
// 005940c2  e9c9f7ffff           jmp 0x593890
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
