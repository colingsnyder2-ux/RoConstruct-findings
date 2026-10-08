// roc 2008-06 00630820  unit: RBX::VBodyAngularVelocity::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00630820
//
// 00630820  6820789700           push 0x977820
// 00630825  6820005c00           push 0x5c0020
// 0063082a  e8016bf2ff           call 0x557330
// 0063082f  83c408               add esp, 8
// 00630832  e999f4f8ff           jmp 0x5bfcd0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
