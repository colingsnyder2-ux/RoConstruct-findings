// roc 2011-06 004ddf90  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ddf90
//
// 004ddf90  6830414b00           push 0x4b4130
// 004ddf95  68bc59cb00           push 0xcb59bc
// 004ddf9a  e87136f2ff           call 0x401610
// 004ddf9f  83c408               add esp, 8
// 004ddfa2  e92961fdff           jmp 0x4b40d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
