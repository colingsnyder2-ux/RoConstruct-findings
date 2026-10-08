// roc 2009-06 00654330  unit: RBX::StudsTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00654330
//
// 00654330  6870346500           push 0x653470
// 00654335  686cc7a400           push 0xa4c76c
// 0065433a  e8d1d3daff           call 0x401710
// 0065433f  83c408               add esp, 8
// 00654342  e909e7ffff           jmp 0x652a50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
