// roc 2008-06 00555020  unit: RBX::VRunService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00555020
//
// 00555020  68b0c29600           push 0x96c2b0
// 00555025  68f0294000           push 0x4029f0
// 0055502a  e801230000           call 0x557330
// 0055502f  83c408               add esp, 8
// 00555032  e9c9c9eaff           jmp 0x401a00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
