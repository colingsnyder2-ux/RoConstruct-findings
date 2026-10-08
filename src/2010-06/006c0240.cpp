// roc 2010-06 006c0240  unit: RBX::VVirtualUser::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c0240
//
// 006c0240  68d0c35a00           push 0x5ac3d0
// 006c0245  68b4c1c000           push 0xc0c1b4
// 006c024a  e84114d4ff           call 0x401690
// 006c024f  83c408               add esp, 8
// 006c0252  e929a9eeff           jmp 0x5aab80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
