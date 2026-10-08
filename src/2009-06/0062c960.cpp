// roc 2009-06 0062c960  unit: RBX::ArrowTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062c960
//
// 0062c960  6800bc6200           push 0x62bc00
// 0062c965  68c0b9a400           push 0xa4b9c0
// 0062c96a  e8a14dddff           call 0x401710
// 0062c96f  83c408               add esp, 8
// 0062c972  e9e9e6ffff           jmp 0x62b060
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
