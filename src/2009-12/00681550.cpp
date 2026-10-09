// roc 2009-12 00681550  unit: RBX::VLocalScript::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00681550
//
// 00681550  68f03a4100           push 0x413af0
// 00681555  6818a1b700           push 0xb7a118
// 0068155a  e8d100d8ff           call 0x401630
// 0068155f  83c408               add esp, 8
// 00681562  e93922d9ff           jmp 0x4137a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
