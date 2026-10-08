// roc 2010-06 0077a080  unit: RBX::PartDropTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077a080
//
// 0077a080  68b09e7700           push 0x779eb0
// 0077a085  686034c200           push 0xc23460
// 0077a08a  e80176c8ff           call 0x401690
// 0077a08f  83c408               add esp, 8
// 0077a092  e949fcffff           jmp 0x779ce0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
