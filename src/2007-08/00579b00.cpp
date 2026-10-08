// roc 2007-08 00579b00  unit: RBX::VSpecialShape::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579b00
//
// 00579b00  6888b48b00           push 0x8bb488
// 00579b05  6830c14100           push 0x41c130
// 00579b0a  e811ba1a00           call 0x725520
// 00579b0f  83c408               add esp, 8
// 00579b12  e9b924eaff           jmp 0x41bfd0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
