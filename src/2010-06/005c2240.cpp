// roc 2010-06 005c2240  unit: std::D::DU?$char_traits::V?$basic_string::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c2240
//
// 005c2240  68b0c65a00           push 0x5ac6b0
// 005c2245  686cc2c000           push 0xc0c26c
// 005c224a  e841f4e3ff           call 0x401690
// 005c224f  83c408               add esp, 8
// 005c2252  e9499dfeff           jmp 0x5abfa0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
