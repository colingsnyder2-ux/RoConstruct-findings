// roc 2010-06 0069bb90  unit: RBX::VSky::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069bb90
//
// 0069bb90  68a0705200           push 0x5270a0
// 0069bb95  682089c000           push 0xc08920
// 0069bb9a  e8f15ad6ff           call 0x401690
// 0069bb9f  83c408               add esp, 8
// 0069bba2  e9c9afe8ff           jmp 0x526b70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
