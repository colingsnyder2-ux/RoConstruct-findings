// roc 2008-06 005d4290  unit: RBX::VShirtGraphic::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d4290
//
// 005d4290  68c8fb9600           push 0x96fbc8
// 005d4295  68e0aa4800           push 0x48aae0
// 005d429a  e89130f8ff           call 0x557330
// 005d429f  83c408               add esp, 8
// 005d42a2  e9995cebff           jmp 0x489f40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
