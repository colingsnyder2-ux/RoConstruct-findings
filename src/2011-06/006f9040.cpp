// roc 2011-06 006f9040  unit: RBX::VCornerWedgeInstance::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f9040
//
// 006f9040  6810135c00           push 0x5c1310
// 006f9045  68d0e5cb00           push 0xcbe5d0
// 006f904a  e8c185d0ff           call 0x401610
// 006f904f  83c408               add esp, 8
// 006f9052  e9a96becff           jmp 0x5bfc00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
