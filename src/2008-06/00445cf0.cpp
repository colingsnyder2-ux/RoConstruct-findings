// roc 2008-06 00445cf0  unit: VCRenderSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445cf0
//
// 00445cf0  6808c39600           push 0x96c308
// 00445cf5  68906e4000           push 0x406e90
// 00445cfa  e831161100           call 0x557330
// 00445cff  83c408               add esp, 8
// 00445d02  e9690afcff           jmp 0x406770
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
