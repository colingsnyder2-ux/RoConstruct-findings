// roc 2010-06 006d3cb0  unit: RBX::VSkateboardPlatform::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d3cb0
//
// 006d3cb0  6850c55a00           push 0x5ac550
// 006d3cb5  6814c2c000           push 0xc0c214
// 006d3cba  e8d1d9d2ff           call 0x401690
// 006d3cbf  83c408               add esp, 8
// 006d3cc2  e93979edff           jmp 0x5ab600
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
