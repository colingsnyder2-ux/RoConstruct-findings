// roc 2008-06 00584c10  unit: RBX::VModelInstance::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584c10
//
// 00584c10  6820cc9600           push 0x96cc20
// 00584c15  68203a4100           push 0x413a20
// 00584c1a  e81127fdff           call 0x557330
// 00584c1f  83c408               add esp, 8
// 00584c22  e929eae8ff           jmp 0x413650
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
