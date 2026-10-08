// roc 2008-06 005d42b0  unit: RBX::VBodyColors::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d42b0
//
// 005d42b0  68d8fb9600           push 0x96fbd8
// 005d42b5  6820ab4800           push 0x48ab20
// 005d42ba  e87130f8ff           call 0x557330
// 005d42bf  83c408               add esp, 8
// 005d42c2  e9395eebff           jmp 0x48a100
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
