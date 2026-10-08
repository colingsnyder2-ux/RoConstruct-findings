// roc 2011-06 005e4360  unit: RBX::Reflection::EnumDescriptor  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e4360
//
// 005e4360  6850435e00           push 0x5e4350
// 005e4365  68f4aacc00           push 0xccaaf4
// 005e436a  e8a1d2e1ff           call 0x401610
// 005e436f  83c408               add esp, 8
// 005e4372  e979ffffff           jmp 0x5e42f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
