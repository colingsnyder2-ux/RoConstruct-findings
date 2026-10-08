// roc 2011-06 00599700  unit: RBX::VRunService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00599700
//
// 00599700  68c0254000           push 0x4025c0
// 00599705  68e815cb00           push 0xcb15e8
// 0059970a  e8017fe6ff           call 0x401610
// 0059970f  83c408               add esp, 8
// 00599712  e9898ce6ff           jmp 0x4023a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
