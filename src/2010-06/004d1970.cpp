// roc 2010-06 004d1970  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d1970
//
// 004d1970  68d0364b00           push 0x4b36d0
// 004d1975  68c843c000           push 0xc043c8
// 004d197a  e811fdf2ff           call 0x401690
// 004d197f  83c408               add esp, 8
// 004d1982  e9e91cfeff           jmp 0x4b3670
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
