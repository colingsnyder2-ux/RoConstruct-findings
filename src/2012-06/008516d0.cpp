// roc 2012-06 008516d0  unit: RBX::VBaseScript::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008516d0
//
// 008516d0  6850138500           push 0x851350
// 008516d5  689013e500           push 0xe51390
// 008516da  e8c1febaff           call 0x4015a0
// 008516df  83c408               add esp, 8
// 008516e2  e9b9fbffff           jmp 0x8512a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
