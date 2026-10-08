// roc 2007-08 00572be0  unit: RBX::VDecal::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00572be0
//
// 00572be0  687cb48b00           push 0x8bb47c
// 00572be5  6800c14100           push 0x41c100
// 00572bea  e831291b00           call 0x725520
// 00572bef  83c408               add esp, 8
// 00572bf2  e95992eaff           jmp 0x41be50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
