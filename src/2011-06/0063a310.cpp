// roc 2011-06 0063a310  unit: RBX::VScript::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063a310
//
// 0063a310  6830754200           push 0x427530
// 0063a315  68a825cb00           push 0xcb25a8
// 0063a31a  e8f172dcff           call 0x401610
// 0063a31f  83c408               add esp, 8
// 0063a322  e989cbdeff           jmp 0x426eb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
