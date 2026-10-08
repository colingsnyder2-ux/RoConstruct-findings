// roc 2011-06 006f6ae0  unit: RBX::VFunctionalTest::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f6ae0
//
// 006f6ae0  68f0125c00           push 0x5c12f0
// 006f6ae5  68c8e5cb00           push 0xcbe5c8
// 006f6aea  e821abd0ff           call 0x401610
// 006f6aef  83c408               add esp, 8
// 006f6af2  e92990ecff           jmp 0x5bfb20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
