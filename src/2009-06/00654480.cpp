// roc 2009-06 00654480  unit: RBX::InletTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00654480
//
// 00654480  6880346500           push 0x653480
// 00654485  6870c7a400           push 0xa4c770
// 0065448a  e881d2daff           call 0x401710
// 0065448f  83c408               add esp, 8
// 00654492  e929e6ffff           jmp 0x652ac0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
