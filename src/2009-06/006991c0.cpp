// roc 2009-06 006991c0  unit: RBX::VHole::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006991c0
//
// 006991c0  6800a15e00           push 0x5ea100
// 006991c5  688c49a400           push 0xa4498c
// 006991ca  e84185d6ff           call 0x401710
// 006991cf  83c408               add esp, 8
// 006991d2  e9c901f5ff           jmp 0x5e93a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
