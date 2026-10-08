// roc 2010-06 006ccde0  unit: RBX::VArcHandles::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ccde0
//
// 006ccde0  68f0c45a00           push 0x5ac4f0
// 006ccde5  68fcc1c000           push 0xc0c1fc
// 006ccdea  e8a148d3ff           call 0x401690
// 006ccdef  83c408               add esp, 8
// 006ccdf2  e969e5edff           jmp 0x5ab360
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
