// roc 2008-06 005cd220  unit: RBX::VCamera::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cd220
//
// 005cd220  6890de9600           push 0x96de90
// 005cd225  68f0b64500           push 0x45b6f0
// 005cd22a  e801a1f8ff           call 0x557330
// 005cd22f  83c408               add esp, 8
// 005cd232  e909e0e8ff           jmp 0x45b240
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
