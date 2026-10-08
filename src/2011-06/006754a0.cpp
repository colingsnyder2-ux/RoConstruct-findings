// roc 2011-06 006754a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006754a0
//
// 006754a0  6830164700           push 0x471630
// 006754a5  685c3ecb00           push 0xcb3e5c
// 006754aa  e861c1d8ff           call 0x401610
// 006754af  83c408               add esp, 8
// 006754b2  e9a9a3dfff           jmp 0x46f860
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
