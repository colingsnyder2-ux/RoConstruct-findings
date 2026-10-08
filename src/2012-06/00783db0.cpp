// roc 2012-06 00783db0  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783db0
//
// 00783db0  6860107700           push 0x771060
// 00783db5  680886e400           push 0xe48608
// 00783dba  e8e1d7c7ff           call 0x4015a0
// 00783dbf  83c408               add esp, 8
// 00783dc2  e939d2feff           jmp 0x771000
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
