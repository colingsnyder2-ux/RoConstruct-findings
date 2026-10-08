// roc 2010-06 006d9b30  unit: RBX::VSurfaceSelection::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d9b30
//
// 006d9b30  6890c55a00           push 0x5ac590
// 006d9b35  6824c2c000           push 0xc0c224
// 006d9b3a  e8517bd2ff           call 0x401690
// 006d9b3f  83c408               add esp, 8
// 006d9b42  e9791cedff           jmp 0x5ab7c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
