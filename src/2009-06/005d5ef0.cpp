// roc 2009-06 005d5ef0  unit: RBX::VRunService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d5ef0
//
// 005d5ef0  6870254000           push 0x402570
// 005d5ef5  684097a300           push 0xa39740
// 005d5efa  e811b8e2ff           call 0x401710
// 005d5eff  83c408               add esp, 8
// 005d5f02  e989c5e2ff           jmp 0x402490
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
