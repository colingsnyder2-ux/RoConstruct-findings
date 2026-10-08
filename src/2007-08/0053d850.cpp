// roc 2007-08 0053d850  unit: RBX::VLocalScript::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053d850
//
// 0053d850  68ccae8b00           push 0x8baecc
// 0053d855  68d0354000           push 0x4035d0
// 0053d85a  e8c17c1e00           call 0x725520
// 0053d85f  83c408               add esp, 8
// 0053d862  e9394fecff           jmp 0x4027a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
