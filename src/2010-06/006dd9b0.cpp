// roc 2010-06 006dd9b0  unit: RBX::VScreenGui::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006dd9b0
//
// 006dd9b0  68d0c55a00           push 0x5ac5d0
// 006dd9b5  6834c2c000           push 0xc0c234
// 006dd9ba  e8d13cd2ff           call 0x401690
// 006dd9bf  83c408               add esp, 8
// 006dd9c2  e9b9dfecff           jmp 0x5ab980
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
