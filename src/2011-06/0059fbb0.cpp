// roc 2011-06 0059fbb0  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059fbb0
//
// 0059fbb0  68d0254000           push 0x4025d0
// 0059fbb5  68ec15cb00           push 0xcb15ec
// 0059fbba  e8511ae6ff           call 0x401610
// 0059fbbf  83c408               add esp, 8
// 0059fbc2  e94928e6ff           jmp 0x402410
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
