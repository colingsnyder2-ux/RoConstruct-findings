// roc 2010-06 0059cdf0  unit: RBX::VRunService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0059cdf0
//
// 0059cdf0  6890214000           push 0x402190
// 0059cdf5  68d8fabf00           push 0xbffad8
// 0059cdfa  e89148e6ff           call 0x401690
// 0059cdff  83c408               add esp, 8
// 0059ce02  e90952e6ff           jmp 0x402010
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
