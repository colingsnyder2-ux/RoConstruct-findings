// roc 2011-06 0060c020  unit: RBX::VModelInstance::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0060c020
//
// 0060c020  68705e4100           push 0x415e70
// 0060c025  682023cb00           push 0xcb2320
// 0060c02a  e8e155dfff           call 0x401610
// 0060c02f  83c408               add esp, 8
// 0060c032  e9b99be0ff           jmp 0x415bf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
