// roc 2011-06 004ddff0  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ddff0
//
// 004ddff0  68d0354d00           push 0x4d35d0
// 004ddff5  68ac67cb00           push 0xcb67ac
// 004ddffa  e81136f2ff           call 0x401610
// 004ddfff  83c408               add esp, 8
// 004de002  e96955ffff           jmp 0x4d3570
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
