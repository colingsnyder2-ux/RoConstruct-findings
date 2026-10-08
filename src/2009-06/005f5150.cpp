// roc 2009-06 005f5150  unit: std::D::DU?$char_traits::V?$basic_string::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f5150
//
// 005f5150  6890a25e00           push 0x5ea290
// 005f5155  68f049a400           push 0xa449f0
// 005f515a  e8b1c5e0ff           call 0x401710
// 005f515f  83c408               add esp, 8
// 005f5162  e9294dffff           jmp 0x5e9e90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
