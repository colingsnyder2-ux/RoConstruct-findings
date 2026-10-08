// roc 2011-06 004e3340  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e3340
//
// 004e3340  6860584a00           push 0x4a5860
// 004e3345  68c053cb00           push 0xcb53c0
// 004e334a  e8c1e2f1ff           call 0x401610
// 004e334f  83c408               add esp, 8
// 004e3352  e98907fcff           jmp 0x4a3ae0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
