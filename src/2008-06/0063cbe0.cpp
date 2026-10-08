// roc 2008-06 0063cbe0  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063cbe0
//
// 0063cbe0  6830789700           push 0x977830
// 0063cbe5  6860005c00           push 0x5c0060
// 0063cbea  e841a7f1ff           call 0x557330
// 0063cbef  83c408               add esp, 8
// 0063cbf2  e99932f8ff           jmp 0x5bfe90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
