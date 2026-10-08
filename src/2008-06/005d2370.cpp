// roc 2008-06 005d2370  unit: RBX::VSpawnLocation::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d2370
//
// 005d2370  68c0fb9600           push 0x96fbc0
// 005d2375  68c0aa4800           push 0x48aac0
// 005d237a  e8b14ff8ff           call 0x557330
// 005d237f  83c408               add esp, 8
// 005d2382  e9d97aebff           jmp 0x489e60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
