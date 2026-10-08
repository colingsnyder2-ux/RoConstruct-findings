// roc 2010-06 006c8b60  unit: RBX::VHandles::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c8b60
//
// 006c8b60  68e0c45a00           push 0x5ac4e0
// 006c8b65  68f8c1c000           push 0xc0c1f8
// 006c8b6a  e8218bd3ff           call 0x401690
// 006c8b6f  83c408               add esp, 8
// 006c8b72  e97927eeff           jmp 0x5ab2f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
