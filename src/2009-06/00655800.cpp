// roc 2009-06 00655800  unit: RBX::LaserTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00655800
//
// 00655800  6850356500           push 0x653550
// 00655805  68a4c7a400           push 0xa4c7a4
// 0065580a  e801bfdaff           call 0x401710
// 0065580f  83c408               add esp, 8
// 00655812  e959d8ffff           jmp 0x653070
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
