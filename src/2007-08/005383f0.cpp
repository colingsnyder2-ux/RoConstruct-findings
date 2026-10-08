// roc 2007-08 005383f0  unit: RBX::VScriptContext::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005383f0
//
// 005383f0  68c4ae8b00           push 0x8baec4
// 005383f5  68b0354000           push 0x4035b0
// 005383fa  e821d11e00           call 0x725520
// 005383ff  83c408               add esp, 8
// 00538402  e999a2ecff           jmp 0x4026a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
