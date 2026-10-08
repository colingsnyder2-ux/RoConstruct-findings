// roc 2011-06 006d3a70  unit: RBX::VRotateP::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d3a70
//
// 006d3a70  6850574f00           push 0x4f5750
// 006d3a75  681083cb00           push 0xcb8310
// 006d3a7a  e891dbd2ff           call 0x401610
// 006d3a7f  83c408               add esp, 8
// 006d3a82  e9590ce2ff           jmp 0x4f46e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
