// roc 2011-06 006d7f60  unit: RBX::VChatService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d7f60
//
// 006d7f60  68a0574f00           push 0x4f57a0
// 006d7f65  682483cb00           push 0xcb8324
// 006d7f6a  e8a196d2ff           call 0x401610
// 006d7f6f  83c408               add esp, 8
// 006d7f72  e999c9e1ff           jmp 0x4f4910
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
