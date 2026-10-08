// roc 2007-08 00581c10  unit: RBX::VHat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00581c10
//
// 00581c10  682cb98b00           push 0x8bb92c
// 00581c15  68c00d4300           push 0x430dc0
// 00581c1a  e801391a00           call 0x725520
// 00581c1f  83c408               add esp, 8
// 00581c22  e959daeaff           jmp 0x42f680
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
