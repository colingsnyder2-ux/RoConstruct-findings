// roc 2011-06 00695ab0  unit: RBX::VTimerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00695ab0
//
// 00695ab0  6880594a00           push 0x4a5980
// 00695ab5  680854cb00           push 0xcb5408
// 00695aba  e851bbd6ff           call 0x401610
// 00695abf  83c408               add esp, 8
// 00695ac2  e9f9e7e0ff           jmp 0x4a42c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
