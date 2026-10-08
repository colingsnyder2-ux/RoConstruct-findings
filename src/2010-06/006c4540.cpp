// roc 2010-06 006c4540  unit: RBX::VFlag::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c4540
//
// 006c4540  6820c45a00           push 0x5ac420
// 006c4545  68c8c1c000           push 0xc0c1c8
// 006c454a  e841d1d3ff           call 0x401690
// 006c454f  83c408               add esp, 8
// 006c4552  e95968eeff           jmp 0x5aadb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
