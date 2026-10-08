// roc 2010-06 005c2dd0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c2dd0
//
// 005c2dd0  6800c75a00           push 0x5ac700
// 005c2dd5  6880c2c000           push 0xc0c280
// 005c2dda  e8b1e8e3ff           call 0x401690
// 005c2ddf  83c408               add esp, 8
// 005c2de2  e9e993feff           jmp 0x5ac1d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
