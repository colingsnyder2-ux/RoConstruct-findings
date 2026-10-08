// roc 2012-06 0070ca20  unit: RBX::VWidget::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0070ca20
//
// 0070ca20  68f0c17000           push 0x70c1f0
// 0070ca25  689013e300           push 0xe31390
// 0070ca2a  e8714bcfff           call 0x4015a0
// 0070ca2f  83c408               add esp, 8
// 0070ca32  e9a9f6ffff           jmp 0x70c0e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
