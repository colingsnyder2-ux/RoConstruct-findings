// roc 2008-06 005c2c40  unit: RBX::VObjectValue::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2c40
//
// 005c2c40  6828789700           push 0x977828
// 005c2c45  6840005c00           push 0x5c0040
// 005c2c4a  e8e146f9ff           call 0x557330
// 005c2c4f  83c408               add esp, 8
// 005c2c52  e959d1ffff           jmp 0x5bfdb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
