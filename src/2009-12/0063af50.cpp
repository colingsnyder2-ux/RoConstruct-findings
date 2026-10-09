// roc 2009-12 0063af50  unit: RBX::VRunService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0063af50
//
// 0063af50  6810214000           push 0x402110
// 0063af55  682895b700           push 0xb79528
// 0063af5a  e8d166dcff           call 0x401630
// 0063af5f  83c408               add esp, 8
// 0063af62  e9b970dcff           jmp 0x402020
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
