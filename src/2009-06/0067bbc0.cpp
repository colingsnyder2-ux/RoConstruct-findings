// roc 2009-06 0067bbc0  unit: RBX::VRotateV::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067bbc0
//
// 0067bbc0  6850424e00           push 0x4e4250
// 0067bbc5  68c0f2a300           push 0xa3f2c0
// 0067bbca  e8415bd8ff           call 0x401710
// 0067bbcf  83c408               add esp, 8
// 0067bbd2  e9b979e6ff           jmp 0x4e3590
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
