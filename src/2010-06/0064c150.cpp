// roc 2010-06 0064c150  unit: RBX::VWidget::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0064c150
//
// 0064c150  68a0bd6400           push 0x64bda0
// 0064c155  683cbdc100           push 0xc1bd3c
// 0064c15a  e83155dbff           call 0x401690
// 0064c15f  83c408               add esp, 8
// 0064c162  e9c9fbffff           jmp 0x64bd30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
