// roc 2010-06 006bb2a0  unit: RBX::VBillboardGui::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006bb2a0
//
// 006bb2a0  6870c35a00           push 0x5ac370
// 006bb2a5  689cc1c000           push 0xc0c19c
// 006bb2aa  e8e163d4ff           call 0x401690
// 006bb2af  83c408               add esp, 8
// 006bb2b2  e929f6eeff           jmp 0x5aa8e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
