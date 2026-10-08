// roc 2009-06 00675540  unit: RBX::VTimerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00675540
//
// 00675540  68e0484b00           push 0x4b48e0
// 00675545  680cd5a300           push 0xa3d50c
// 0067554a  e8c1c1d8ff           call 0x401710
// 0067554f  83c408               add esp, 8
// 00675552  e959e9e3ff           jmp 0x4b3eb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
