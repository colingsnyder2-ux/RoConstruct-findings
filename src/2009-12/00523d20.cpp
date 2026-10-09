// roc 2009-12 00523d20  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00523d20
//
// 00523d20  68d0be5100           push 0x51bed0
// 00523d25  6860ebb700           push 0xb7eb60
// 00523d2a  e801d9edff           call 0x401630
// 00523d2f  83c408               add esp, 8
// 00523d32  e93981ffff           jmp 0x51be70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
