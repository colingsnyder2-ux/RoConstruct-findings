// roc 2009-06 00655630  unit: RBX::RocketTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00655630
//
// 00655630  6820356500           push 0x653520
// 00655635  6898c7a400           push 0xa4c798
// 0065563a  e8d1c0daff           call 0x401710
// 0065563f  83c408               add esp, 8
// 00655642  e9d9d8ffff           jmp 0x652f20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
