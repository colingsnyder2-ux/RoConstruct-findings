// roc 2011-06 0059fbd0  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059fbd0
//
// 0059fbd0  68e0254000           push 0x4025e0
// 0059fbd5  68f015cb00           push 0xcb15f0
// 0059fbda  e8311ae6ff           call 0x401610
// 0059fbdf  83c408               add esp, 8
// 0059fbe2  e99928e6ff           jmp 0x402480
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
