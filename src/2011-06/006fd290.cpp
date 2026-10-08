// roc 2011-06 006fd290  unit: RBX::VFlagStandService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fd290
//
// 006fd290  6880135c00           push 0x5c1380
// 006fd295  68ece5cb00           push 0xcbe5ec
// 006fd29a  e87143d0ff           call 0x401610
// 006fd29f  83c408               add esp, 8
// 006fd2a2  e9692cecff           jmp 0x5bff10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
