// roc 2011-06 006d39c0  unit: RBX::VManualSurfaceJointInstance::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d39c0
//
// 006d39c0  6800574f00           push 0x4f5700
// 006d39c5  68fc82cb00           push 0xcb82fc
// 006d39ca  e841dcd2ff           call 0x401610
// 006d39cf  83c408               add esp, 8
// 006d39d2  e9d90ae2ff           jmp 0x4f44b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
