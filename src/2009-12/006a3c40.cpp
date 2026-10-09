// roc 2009-12 006a3c40  unit: RBX::VScriptContext::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a3c40
//
// 006a3c40  68a0684200           push 0x4268a0
// 006a3c45  68a0a2b700           push 0xb7a2a0
// 006a3c4a  e8e1d9d5ff           call 0x401630
// 006a3c4f  83c408               add esp, 8
// 006a3c52  e9c92ad8ff           jmp 0x426720
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
