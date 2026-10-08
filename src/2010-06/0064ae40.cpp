// roc 2010-06 0064ae40  unit: H::V?$RunningAverageItem::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0064ae40
//
// 0064ae40  6830ae6400           push 0x64ae30
// 0064ae45  68f0bbc100           push 0xc1bbf0
// 0064ae4a  e84168dbff           call 0x401690
// 0064ae4f  83c408               add esp, 8
// 0064ae52  e969ffffff           jmp 0x64adc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
