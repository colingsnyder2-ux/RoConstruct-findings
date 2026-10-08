// roc 2009-06 006545d0  unit: RBX::UniversalTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006545d0
//
// 006545d0  6890346500           push 0x653490
// 006545d5  6874c7a400           push 0xa4c774
// 006545da  e831d1daff           call 0x401710
// 006545df  83c408               add esp, 8
// 006545e2  e949e5ffff           jmp 0x652b30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
