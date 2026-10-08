// roc 2008-06 005c48f0  unit: RBX::VVisit::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c48f0
//
// 005c48f0  6868dd9600           push 0x96dd68
// 005c48f5  6840084500           push 0x450840
// 005c48fa  e8312af9ff           call 0x557330
// 005c48ff  83c408               add esp, 8
// 005c4902  e9e9a9e8ff           jmp 0x44f2f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
