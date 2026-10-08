// roc 2007-08 005fa510  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fa510
//
// 005fa510  68f0378c00           push 0x8c37f0
// 005fa515  6840de5800           push 0x58de40
// 005fa51a  e801b01200           call 0x725520
// 005fa51f  83c408               add esp, 8
// 005fa522  e9d937f9ff           jmp 0x58dd00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
