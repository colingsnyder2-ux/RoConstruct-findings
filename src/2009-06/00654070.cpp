// roc 2009-06 00654070  unit: RBX::GlueTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00654070
//
// 00654070  6850346500           push 0x653450
// 00654075  6864c7a400           push 0xa4c764
// 0065407a  e891d6daff           call 0x401710
// 0065407f  83c408               add esp, 8
// 00654082  e9e9e8ffff           jmp 0x652970
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
