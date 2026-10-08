// roc 2010-06 0058ecf0  unit: RBX::VDebugSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058ecf0
//
// 0058ecf0  6840174000           push 0x401740
// 0058ecf5  68ccf9bf00           push 0xbff9cc
// 0058ecfa  e89129e7ff           call 0x401690
// 0058ecff  83c408               add esp, 8
// 0058ed02  e92926e7ff           jmp 0x401330
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
