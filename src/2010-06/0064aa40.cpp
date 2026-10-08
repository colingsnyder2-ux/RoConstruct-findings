// roc 2010-06 0064aa40  unit: RBX::Stats::VItem::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0064aa40
//
// 0064aa40  6830aa6400           push 0x64aa30
// 0064aa45  68e4bbc100           push 0xc1bbe4
// 0064aa4a  e8416cdbff           call 0x401690
// 0064aa4f  83c408               add esp, 8
// 0064aa52  e969ffffff           jmp 0x64a9c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
