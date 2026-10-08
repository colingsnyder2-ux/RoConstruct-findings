// roc 2010-06 00666b40  unit: RBX::VStarterGuiService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00666b40
//
// 00666b40  6860494a00           push 0x4a4960
// 00666b45  683c3ec000           push 0xc03e3c
// 00666b4a  e841abd9ff           call 0x401690
// 00666b4f  83c408               add esp, 8
// 00666b52  e929cde3ff           jmp 0x4a3880
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
