// roc 2009-12 0062cf80  unit: RBX::VDebugSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062cf80
//
// 0062cf80  68e0164000           push 0x4016e0
// 0062cf85  681c94b700           push 0xb7941c
// 0062cf8a  e8a146ddff           call 0x401630
// 0062cf8f  83c408               add esp, 8
// 0062cf92  e99943ddff           jmp 0x401330
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
