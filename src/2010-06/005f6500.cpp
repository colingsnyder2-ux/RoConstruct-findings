// roc 2010-06 005f6500  unit: RBX::VLegacyHopperService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f6500
//
// 005f6500  6840764100           push 0x417640
// 005f6505  684c07c000           push 0xc0074c
// 005f650a  e881b1e0ff           call 0x401690
// 005f650f  83c408               add esp, 8
// 005f6512  e9b90fe2ff           jmp 0x4174d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
