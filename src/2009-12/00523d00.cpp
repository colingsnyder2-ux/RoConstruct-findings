// roc 2009-12 00523d00  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00523d00
//
// 00523d00  68305d5000           push 0x505d30
// 00523d05  68d8e3b700           push 0xb7e3d8
// 00523d0a  e821d9edff           call 0x401630
// 00523d0f  83c408               add esp, 8
// 00523d12  e9b91ffeff           jmp 0x505cd0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
