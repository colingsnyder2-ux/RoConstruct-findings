// roc 2010-06 00645310  unit: RBX::VSpecialShape::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00645310
//
// 00645310  68c07c4500           push 0x457cc0
// 00645315  68f41dc000           push 0xc01df4
// 0064531a  e871c3dbff           call 0x401690
// 0064531f  83c408               add esp, 8
// 00645322  e9690ee1ff           jmp 0x456190
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
