// roc 2011-06 006ef1b0  unit: RBX::VBillboardGui::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ef1b0
//
// 006ef1b0  6850125c00           push 0x5c1250
// 006ef1b5  68a0e5cb00           push 0xcbe5a0
// 006ef1ba  e85124d1ff           call 0x401610
// 006ef1bf  83c408               add esp, 8
// 006ef1c2  e9f904edff           jmp 0x5bf6c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
