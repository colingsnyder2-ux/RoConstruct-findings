// roc 2010-06 006c2a10  unit: RBX::VHole::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c2a10
//
// 006c2a10  6800c45a00           push 0x5ac400
// 006c2a15  68c0c1c000           push 0xc0c1c0
// 006c2a1a  e871ecd3ff           call 0x401690
// 006c2a1f  83c408               add esp, 8
// 006c2a22  e9a982eeff           jmp 0x5aacd0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
