// roc 2008-06 005e3330  unit: RBX::VRotateP::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3330
//
// 005e3330  6884149700           push 0x971484
// 005e3335  6860c34a00           push 0x4ac360
// 005e333a  e8f13ff7ff           call 0x557330
// 005e333f  83c408               add esp, 8
// 005e3342  e9d97fecff           jmp 0x4ab320
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
