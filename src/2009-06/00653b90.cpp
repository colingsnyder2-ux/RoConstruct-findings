// roc 2009-06 00653b90  unit: RBX::AxisRotateTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00653b90
//
// 00653b90  68b0356500           push 0x6535b0
// 00653b95  68bcc7a400           push 0xa4c7bc
// 00653b9a  e871dbdaff           call 0x401710
// 00653b9f  83c408               add esp, 8
// 00653ba2  e969f7ffff           jmp 0x653310
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
