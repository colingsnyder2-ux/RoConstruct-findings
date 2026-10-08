// roc 2011-06 0058d200  unit: RBX::VDebugSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058d200
//
// 0058d200  68a0164000           push 0x4016a0
// 0058d205  68ec14cb00           push 0xcb14ec
// 0058d20a  e80144e7ff           call 0x401610
// 0058d20f  83c408               add esp, 8
// 0058d212  e9b940e7ff           jmp 0x4012d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
