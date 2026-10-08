// roc 2008-06 00630800  unit: RBX::VBodyVelocity::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00630800
//
// 00630800  681c789700           push 0x97781c
// 00630805  6810005c00           push 0x5c0010
// 0063080a  e8216bf2ff           call 0x557330
// 0063080f  83c408               add esp, 8
// 00630812  e949f4f8ff           jmp 0x5bfc60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
