// roc 2007-08 00543070  unit: RBX::VDebugSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00543070
//
// 00543070  6840af8b00           push 0x8baf40
// 00543075  68b08c4000           push 0x408cb0
// 0054307a  e8a1241e00           call 0x725520
// 0054307f  83c408               add esp, 8
// 00543082  e99955ecff           jmp 0x408620
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
