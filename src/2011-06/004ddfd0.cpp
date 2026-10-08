// roc 2011-06 004ddfd0  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ddfd0
//
// 004ddfd0  68c0404b00           push 0x4b40c0
// 004ddfd5  68b859cb00           push 0xcb59b8
// 004ddfda  e83136f2ff           call 0x401610
// 004ddfdf  83c408               add esp, 8
// 004ddfe2  e97960fdff           jmp 0x4b4060
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
