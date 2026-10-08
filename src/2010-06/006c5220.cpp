// roc 2010-06 006c5220  unit: RBX::VFlagStand::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c5220
//
// 006c5220  6830c45a00           push 0x5ac430
// 006c5225  68ccc1c000           push 0xc0c1cc
// 006c522a  e861c4d3ff           call 0x401690
// 006c522f  83c408               add esp, 8
// 006c5232  e9e95beeff           jmp 0x5aae20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
