// roc 2010-06 005c49b0  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c49b0
//
// 005c49b0  68f0285900           push 0x5928f0
// 005c49b5  6874a9c000           push 0xc0a974
// 005c49ba  e8d1cce3ff           call 0x401690
// 005c49bf  83c408               add esp, 8
// 005c49c2  e9c9defcff           jmp 0x592890
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
