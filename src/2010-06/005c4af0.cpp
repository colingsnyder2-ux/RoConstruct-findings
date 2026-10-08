// roc 2010-06 005c4af0  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c4af0
//
// 005c4af0  68a08e5b00           push 0x5b8ea0
// 005c4af5  68dc82c100           push 0xc182dc
// 005c4afa  e891cbe3ff           call 0x401690
// 005c4aff  83c408               add esp, 8
// 005c4b02  e93943ffff           jmp 0x5b8e40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
