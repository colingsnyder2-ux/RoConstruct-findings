// roc 2010-06 006e4600  unit: RBX::VLuaDragger::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e4600
//
// 006e4600  6870c65a00           push 0x5ac670
// 006e4605  685cc2c000           push 0xc0c25c
// 006e460a  e881d0d1ff           call 0x401690
// 006e460f  83c408               add esp, 8
// 006e4612  e9c977ecff           jmp 0x5abde0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
