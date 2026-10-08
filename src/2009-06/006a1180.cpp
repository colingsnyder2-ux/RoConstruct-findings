// roc 2009-06 006a1180  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a1180
//
// 006a1180  6830a25e00           push 0x5ea230
// 006a1185  68d849a400           push 0xa449d8
// 006a118a  e88105d6ff           call 0x401710
// 006a118f  83c408               add esp, 8
// 006a1192  e9598af4ff           jmp 0x5e9bf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
