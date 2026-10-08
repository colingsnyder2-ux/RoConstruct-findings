// roc 2008-06 005d2390  unit: RBX::VSpawnerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d2390
//
// 005d2390  68c4fb9600           push 0x96fbc4
// 005d2395  68d0aa4800           push 0x48aad0
// 005d239a  e8914ff8ff           call 0x557330
// 005d239f  83c408               add esp, 8
// 005d23a2  e9297bebff           jmp 0x489ed0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
