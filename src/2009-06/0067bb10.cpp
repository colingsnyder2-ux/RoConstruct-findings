// roc 2009-06 0067bb10  unit: RBX::VRotate::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067bb10
//
// 0067bb10  6830424e00           push 0x4e4230
// 0067bb15  68b8f2a300           push 0xa3f2b8
// 0067bb1a  e8f15bd8ff           call 0x401710
// 0067bb1f  83c408               add esp, 8
// 0067bb22  e98979e6ff           jmp 0x4e34b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
