// roc 2008-06 00629540  unit: RBX::VClickDetector::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00629540
//
// 00629540  68f4779700           push 0x9777f4
// 00629545  6870ff5b00           push 0x5bff70
// 0062954a  e8e1ddf2ff           call 0x557330
// 0062954f  83c408               add esp, 8
// 00629552  e9a962f9ff           jmp 0x5bf800
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
