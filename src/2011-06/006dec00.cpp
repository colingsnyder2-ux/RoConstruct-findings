// roc 2011-06 006dec00  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006dec00
//
// 006dec00  6810eb6d00           push 0x6deb10
// 006dec05  683c1bcd00           push 0xcd1b3c
// 006dec0a  e8012ad2ff           call 0x401610
// 006dec0f  83c408               add esp, 8
// 006dec12  e989feffff           jmp 0x6deaa0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
