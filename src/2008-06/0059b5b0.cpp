// roc 2008-06 0059b5b0  unit: RBX::VPartInstance::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059b5b0
//
// 0059b5b0  68c4d09600           push 0x96d0c4
// 0059b5b5  68d0e04100           push 0x41e0d0
// 0059b5ba  e871bdfbff           call 0x557330
// 0059b5bf  83c408               add esp, 8
// 0059b5c2  e93929e8ff           jmp 0x41df00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
