// roc 2011-06 0067a090  unit: RBX::VLocalBackpack::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067a090
//
// 0067a090  68502d4800           push 0x482d50
// 0067a095  68303fcb00           push 0xcb3f30
// 0067a09a  e87175d8ff           call 0x401610
// 0067a09f  83c408               add esp, 8
// 0067a0a2  e95986e0ff           jmp 0x482700
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
