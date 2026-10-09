// roc 2009-12 006f5810  unit: RBX::VPlayerMouse::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f5810
//
// 006f5810  6880684f00           push 0x4f6880
// 006f5815  6854deb700           push 0xb7de54
// 006f581a  e811bed0ff           call 0x401630
// 006f581f  83c408               add esp, 8
// 006f5822  e969ffdfff           jmp 0x4f5790
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
