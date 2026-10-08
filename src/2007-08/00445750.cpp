// roc 2007-08 00445750  unit: VCRenderSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00445750
//
// 00445750  68a0af8b00           push 0x8bafa0
// 00445755  68c0ed4000           push 0x40edc0
// 0044575a  e8c1fd2d00           call 0x725520
// 0044575f  83c408               add esp, 8
// 00445762  e99995fcff           jmp 0x40ed00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
