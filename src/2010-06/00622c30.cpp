// roc 2010-06 00622c30  unit: RBX::VStockSound::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00622c30
//
// 00622c30  68001d6200           push 0x621d00
// 00622c35  68c8a4c100           push 0xc1a4c8
// 00622c3a  e851eaddff           call 0x401690
// 00622c3f  83c408               add esp, 8
// 00622c42  e939ebffff           jmp 0x621780
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
