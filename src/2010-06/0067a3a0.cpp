// roc 2010-06 0067a3a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0067a3a0
//
// 0067a3a0  68e00e4c00           push 0x4c0ee0
// 0067a3a5  68cc49c000           push 0xc049cc
// 0067a3aa  e8e172d8ff           call 0x401690
// 0067a3af  83c408               add esp, 8
// 0067a3b2  e9495de4ff           jmp 0x4c0100
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
