// roc 2011-06 004ddfb0  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ddfb0
//
// 004ddfb0  68a0414b00           push 0x4b41a0
// 004ddfb5  68c059cb00           push 0xcb59c0
// 004ddfba  e85136f2ff           call 0x401610
// 004ddfbf  83c408               add esp, 8
// 004ddfc2  e97961fdff           jmp 0x4b4140
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
