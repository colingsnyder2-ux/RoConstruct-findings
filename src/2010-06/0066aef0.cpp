// roc 2010-06 0066aef0  unit: RBX::VTeams::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066aef0
//
// 0066aef0  68f0494a00           push 0x4a49f0
// 0066aef5  68603ec000           push 0xc03e60
// 0066aefa  e89167d9ff           call 0x401690
// 0066aeff  83c408               add esp, 8
// 0066af02  e9698de3ff           jmp 0x4a3c70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
