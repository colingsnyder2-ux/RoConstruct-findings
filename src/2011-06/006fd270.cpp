// roc 2011-06 006fd270  unit: RBX::VFlagStand::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fd270
//
// 006fd270  6870135c00           push 0x5c1370
// 006fd275  68e8e5cb00           push 0xcbe5e8
// 006fd27a  e89143d0ff           call 0x401610
// 006fd27f  83c408               add esp, 8
// 006fd282  e9192cecff           jmp 0x5bfea0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
