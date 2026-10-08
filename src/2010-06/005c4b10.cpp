// roc 2010-06 005c4b10  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c4b10
//
// 005c4b10  68808f5b00           push 0x5b8f80
// 005c4b15  68e482c100           push 0xc182e4
// 005c4b1a  e871cbe3ff           call 0x401690
// 005c4b1f  83c408               add esp, 8
// 005c4b22  e9f943ffff           jmp 0x5b8f20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
