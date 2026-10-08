// roc 2007-08 0053d830  unit: RBX::VScript::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053d830
//
// 0053d830  68c8ae8b00           push 0x8baec8
// 0053d835  68c0354000           push 0x4035c0
// 0053d83a  e8e17c1e00           call 0x725520
// 0053d83f  83c408               add esp, 8
// 0053d842  e9d94eecff           jmp 0x402720
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
