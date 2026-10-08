// roc 2011-06 00673e00  unit: RBX::VVisit::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00673e00
//
// 00673e00  6820164700           push 0x471620
// 00673e05  68583ecb00           push 0xcb3e58
// 00673e0a  e801d8d8ff           call 0x401610
// 00673e0f  83c408               add esp, 8
// 00673e12  e9d9b9dfff           jmp 0x46f7f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
