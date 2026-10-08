// roc 2010-06 005c3020  unit: RBX::H$1?sIntConstrainedValue::V?$ConstrainedValue::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c3020
//
// 005c3020  6810c75a00           push 0x5ac710
// 005c3025  6884c2c000           push 0xc0c284
// 005c302a  e861e6e3ff           call 0x401690
// 005c302f  83c408               add esp, 8
// 005c3032  e90992feff           jmp 0x5ac240
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
