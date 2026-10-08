// roc 2009-06 00654720  unit: RBX::HingeTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00654720
//
// 00654720  68a0346500           push 0x6534a0
// 00654725  6878c7a400           push 0xa4c778
// 0065472a  e8e1cfdaff           call 0x401710
// 0065472f  83c408               add esp, 8
// 00654732  e969e4ffff           jmp 0x652ba0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
