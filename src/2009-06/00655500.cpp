// roc 2009-06 00655500  unit: RBX::SlingshotTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00655500
//
// 00655500  6810356500           push 0x653510
// 00655505  6894c7a400           push 0xa4c794
// 0065550a  e801c2daff           call 0x401710
// 0065550f  83c408               add esp, 8
// 00655512  e999d9ffff           jmp 0x652eb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
