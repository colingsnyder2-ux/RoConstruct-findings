// roc 2011-06 0070ca60  unit: RBX::VSky::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0070ca60
//
// 0070ca60  6870145c00           push 0x5c1470
// 0070ca65  6828e6cb00           push 0xcbe628
// 0070ca6a  e8a14bcfff           call 0x401610
// 0070ca6f  83c408               add esp, 8
// 0070ca72  e9293bebff           jmp 0x5c05a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
