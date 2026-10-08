// roc 2008-06 005d8520  unit: RBX::VHumanoid::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d8520
//
// 005d8520  68e8fb9600           push 0x96fbe8
// 005d8525  6860ab4800           push 0x48ab60
// 005d852a  e801eef7ff           call 0x557330
// 005d852f  83c408               add esp, 8
// 005d8532  e9891debff           jmp 0x48a2c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
