// roc 2010-06 004d1990  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d1990
//
// 004d1990  68f0994c00           push 0x4c99f0
// 004d1995  68004cc000           push 0xc04c00
// 004d199a  e8f1fcf2ff           call 0x401690
// 004d199f  83c408               add esp, 8
// 004d19a2  e9e97fffff           jmp 0x4c9990
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
