// roc 2010-06 006cfd40  unit: RBX::VLocalBackpack::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006cfd40
//
// 006cfd40  6820c55a00           push 0x5ac520
// 006cfd45  6808c2c000           push 0xc0c208
// 006cfd4a  e84119d3ff           call 0x401690
// 006cfd4f  83c408               add esp, 8
// 006cfd52  e959b7edff           jmp 0x5ab4b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
