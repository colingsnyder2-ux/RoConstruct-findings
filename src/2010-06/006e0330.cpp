// roc 2010-06 006e0330  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e0330
//
// 006e0330  6820c65a00           push 0x5ac620
// 006e0335  6848c2c000           push 0xc0c248
// 006e033a  e85113d2ff           call 0x401690
// 006e033f  83c408               add esp, 8
// 006e0342  e969b8ecff           jmp 0x5abbb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
