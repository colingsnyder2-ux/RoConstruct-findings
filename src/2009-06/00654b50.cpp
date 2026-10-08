// roc 2009-06 00654b50  unit: RBX::AnchorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00654b50
//
// 00654b50  68f0346500           push 0x6534f0
// 00654b55  688cc7a400           push 0xa4c78c
// 00654b5a  e8b1cbdaff           call 0x401710
// 00654b5f  83c408               add esp, 8
// 00654b62  e969e2ffff           jmp 0x652dd0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
