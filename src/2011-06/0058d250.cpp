// roc 2011-06 0058d250  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058d250
//
// 0058d250  68b0164000           push 0x4016b0
// 0058d255  68f014cb00           push 0xcb14f0
// 0058d25a  e8b143e7ff           call 0x401610
// 0058d25f  83c408               add esp, 8
// 0058d262  e9d940e7ff           jmp 0x401340
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
