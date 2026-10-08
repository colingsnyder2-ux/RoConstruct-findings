// roc 2009-06 005dae20  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005dae20
//
// 005dae20  6890ed4400           push 0x44ed90
// 005dae25  689cb3a300           push 0xa3b39c
// 005dae2a  e8e168e2ff           call 0x401710
// 005dae2f  83c408               add esp, 8
// 005dae32  e90927e7ff           jmp 0x44d540
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
