// roc 2012-06 009693f0  unit: RBX::AdvLuaDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009693f0
//
// 009693f0  68e0939600           push 0x9693e0
// 009693f5  683072e500           push 0xe57230
// 009693fa  e8a181a9ff           call 0x4015a0
// 009693ff  83c408               add esp, 8
// 00969402  e9a9fdffff           jmp 0x9691b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
