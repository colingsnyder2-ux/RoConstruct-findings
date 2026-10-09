// roc 2009-12 006931b0  unit: RBX::VTool::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006931b0
//
// 006931b0  6800784100           push 0x417800
// 006931b5  68cca1b700           push 0xb7a1cc
// 006931ba  e871e4d6ff           call 0x401630
// 006931bf  83c408               add esp, 8
// 006931c2  e98945d8ff           jmp 0x417750
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
