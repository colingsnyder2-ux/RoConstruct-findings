// roc 2011-06 00688ca0  unit: RBX::VKeyframe::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00688ca0
//
// 00688ca0  6830c44900           push 0x49c430
// 00688ca5  680852cb00           push 0xcb5208
// 00688caa  e86189d7ff           call 0x401610
// 00688caf  83c408               add esp, 8
// 00688cb2  e9f932e1ff           jmp 0x49bfb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
