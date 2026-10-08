// roc 2009-06 0063d1c0  unit: RBX::VAccoutrement::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0063d1c0
//
// 0063d1c0  68e0964200           push 0x4296e0
// 0063d1c5  6894a2a300           push 0xa3a294
// 0063d1ca  e84145dcff           call 0x401710
// 0063d1cf  83c408               add esp, 8
// 0063d1d2  e929acdeff           jmp 0x427e00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
