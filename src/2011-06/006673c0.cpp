// roc 2011-06 006673c0  unit: RBX::VControllerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006673c0
//
// 006673c0  68f03a4600           push 0x463af0
// 006673c5  68783bcb00           push 0xcb3b78
// 006673ca  e841a2d9ff           call 0x401610
// 006673cf  83c408               add esp, 8
// 006673d2  e929b5dfff           jmp 0x462900
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
