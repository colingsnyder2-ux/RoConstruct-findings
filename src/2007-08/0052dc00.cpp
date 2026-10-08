// roc 2007-08 0052dc00  unit: RBX::VRunService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052dc00
//
// 0052dc00  68b8ae8b00           push 0x8baeb8
// 0052dc05  6880354000           push 0x403580
// 0052dc0a  e811791f00           call 0x725520
// 0052dc0f  83c408               add esp, 8
// 0052dc12  e90949edff           jmp 0x402520
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
