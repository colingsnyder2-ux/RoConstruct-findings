// roc 2009-12 00528fa0  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00528fa0
//
// 00528fa0  6840684f00           push 0x4f6840
// 00528fa5  6844deb700           push 0xb7de44
// 00528faa  e88186edff           call 0x401630
// 00528faf  83c408               add esp, 8
// 00528fb2  e919c6fcff           jmp 0x4f55d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
