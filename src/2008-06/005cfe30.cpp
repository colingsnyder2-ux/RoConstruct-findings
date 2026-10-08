// roc 2008-06 005cfe30  unit: RBX::VLegacyHopperService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cfe30
//
// 005cfe30  68b8fb9600           push 0x96fbb8
// 005cfe35  68a0aa4800           push 0x48aaa0
// 005cfe3a  e8f174f8ff           call 0x557330
// 005cfe3f  83c408               add esp, 8
// 005cfe42  e9399febff           jmp 0x489d80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
