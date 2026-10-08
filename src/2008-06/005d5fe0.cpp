// roc 2008-06 005d5fe0  unit: RBX::VTeams::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d5fe0
//
// 005d5fe0  68e0fb9600           push 0x96fbe0
// 005d5fe5  6840ab4800           push 0x48ab40
// 005d5fea  e84113f8ff           call 0x557330
// 005d5fef  83c408               add esp, 8
// 005d5ff2  e9e941ebff           jmp 0x48a1e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
