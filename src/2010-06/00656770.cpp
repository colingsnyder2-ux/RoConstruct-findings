// roc 2010-06 00656770  unit: RBX::VKeyframe::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00656770
//
// 00656770  68d0ca4700           push 0x47cad0
// 00656775  681430c000           push 0xc03014
// 0065677a  e811afdaff           call 0x401690
// 0065677f  83c408               add esp, 8
// 00656782  e9295ee2ff           jmp 0x47c5b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
