// roc 2007-08 00595600  unit: RBX::HammerTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00595600
//
// 00595600  68f84d8c00           push 0x8c4df8
// 00595605  68b03d5900           push 0x593db0
// 0059560a  e811ff1800           call 0x725520
// 0059560f  83c408               add esp, 8
// 00595612  e9e9e2ffff           jmp 0x593900
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
