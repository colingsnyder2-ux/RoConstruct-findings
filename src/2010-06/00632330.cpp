// roc 2010-06 00632330  unit: RBX::VGameSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00632330
//
// 00632330  6810e34400           push 0x44e310
// 00632335  68581ac000           push 0xc01a58
// 0063233a  e851f3dcff           call 0x401690
// 0063233f  83c408               add esp, 8
// 00632342  e989afe1ff           jmp 0x44d2d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
