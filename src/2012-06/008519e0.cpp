// roc 2012-06 008519e0  unit: RBX::VCoreScript::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008519e0
//
// 008519e0  68d0198500           push 0x8519d0
// 008519e5  689c13e500           push 0xe5139c
// 008519ea  e8b1fbbaff           call 0x4015a0
// 008519ef  83c408               add esp, 8
// 008519f2  e969ffffff           jmp 0x851960
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
