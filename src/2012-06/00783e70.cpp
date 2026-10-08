// roc 2012-06 00783e70  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783e70
//
// 00783e70  68404b7300           push 0x734b40
// 00783e75  68703fe300           push 0xe33f70
// 00783e7a  e821d7c7ff           call 0x4015a0
// 00783e7f  83c408               add esp, 8
// 00783e82  e9590cfbff           jmp 0x734ae0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
