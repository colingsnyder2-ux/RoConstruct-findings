// roc 2009-06 0067bbe0  unit: RBX::VMotor::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067bbe0
//
// 0067bbe0  6860424e00           push 0x4e4260
// 0067bbe5  68c4f2a300           push 0xa3f2c4
// 0067bbea  e8215bd8ff           call 0x401710
// 0067bbef  83c408               add esp, 8
// 0067bbf2  e9097ae6ff           jmp 0x4e3600
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
