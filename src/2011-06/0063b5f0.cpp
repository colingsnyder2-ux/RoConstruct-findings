// roc 2011-06 0063b5f0  unit: RBX::VLocalScript::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063b5f0
//
// 0063b5f0  6840754200           push 0x427540
// 0063b5f5  68ac25cb00           push 0xcb25ac
// 0063b5fa  e81160dcff           call 0x401610
// 0063b5ff  83c408               add esp, 8
// 0063b602  e919b9deff           jmp 0x426f20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
