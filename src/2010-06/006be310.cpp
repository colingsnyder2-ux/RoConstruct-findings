// roc 2010-06 006be310  unit: RBX::VConfiguration::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006be310
//
// 006be310  68a0c35a00           push 0x5ac3a0
// 006be315  68a8c1c000           push 0xc0c1a8
// 006be31a  e87133d4ff           call 0x401690
// 006be31f  83c408               add esp, 8
// 006be322  e909c7eeff           jmp 0x5aaa30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
