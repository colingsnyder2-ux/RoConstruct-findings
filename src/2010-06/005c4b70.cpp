// roc 2010-06 005c4b70  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c4b70
//
// 005c4b70  68d0905b00           push 0x5b90d0
// 005c4b75  68f082c100           push 0xc182f0
// 005c4b7a  e811cbe3ff           call 0x401690
// 005c4b7f  83c408               add esp, 8
// 005c4b82  e9e944ffff           jmp 0x5b9070
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
