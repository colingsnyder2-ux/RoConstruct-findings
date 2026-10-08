// roc 2011-06 00691ab0  unit: RBX::VSpawnerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00691ab0
//
// 00691ab0  6800594a00           push 0x4a5900
// 00691ab5  68e853cb00           push 0xcb53e8
// 00691aba  e851fbd6ff           call 0x401610
// 00691abf  83c408               add esp, 8
// 00691ac2  e97924e1ff           jmp 0x4a3f40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
