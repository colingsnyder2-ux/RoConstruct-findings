// roc 2010-06 00666b20  unit: RBX::VPlayerGui::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00666b20
//
// 00666b20  6850494a00           push 0x4a4950
// 00666b25  68383ec000           push 0xc03e38
// 00666b2a  e861abd9ff           call 0x401690
// 00666b2f  83c408               add esp, 8
// 00666b32  e9d9cce3ff           jmp 0x4a3810
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
