// roc 2009-06 00655300  unit: RBX::HammerTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00655300
//
// 00655300  6840356500           push 0x653540
// 00655305  68a0c7a400           push 0xa4c7a0
// 0065530a  e801c4daff           call 0x401710
// 0065530f  83c408               add esp, 8
// 00655312  e9e9dcffff           jmp 0x653000
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
