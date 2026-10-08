// roc 2010-06 005f6520  unit: RBX::VStarterGear::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f6520
//
// 005f6520  6850764100           push 0x417650
// 005f6525  685007c000           push 0xc00750
// 005f652a  e861b1e0ff           call 0x401690
// 005f652f  83c408               add esp, 8
// 005f6532  e90910e2ff           jmp 0x417540
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
