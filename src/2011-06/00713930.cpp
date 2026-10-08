// roc 2011-06 00713930  unit: RBX::VSmoke::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00713930
//
// 00713930  68a0145c00           push 0x5c14a0
// 00713935  6834e6cb00           push 0xcbe634
// 0071393a  e8d1dcceff           call 0x401610
// 0071393f  83c408               add esp, 8
// 00713942  e9a9cdeaff           jmp 0x5c06f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
