// roc 2011-06 005a5dd0  unit: RBX::VRenderHooksService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a5dd0
//
// 005a5dd0  68f0254000           push 0x4025f0
// 005a5dd5  68f415cb00           push 0xcb15f4
// 005a5dda  e831b8e5ff           call 0x401610
// 005a5ddf  83c408               add esp, 8
// 005a5de2  e909c7e5ff           jmp 0x4024f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
