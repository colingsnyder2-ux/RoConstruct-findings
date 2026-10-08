// roc 2010-06 005c4b30  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c4b30
//
// 005c4b30  68b0564500           push 0x4556b0
// 005c4b35  68581dc000           push 0xc01d58
// 005c4b3a  e851cbe3ff           call 0x401690
// 005c4b3f  83c408               add esp, 8
// 005c4b42  e9090be9ff           jmp 0x455650
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
