// roc 2008-06 00564150  unit: RBX::VDebugSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00564150
//
// 00564150  6804c39600           push 0x96c304
// 00564155  68806e4000           push 0x406e80
// 0056415a  e8d131ffff           call 0x557330
// 0056415f  83c408               add esp, 8
// 00564162  e99925eaff           jmp 0x406700
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
