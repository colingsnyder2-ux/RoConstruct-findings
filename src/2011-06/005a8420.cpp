// roc 2011-06 005a8420  unit: RBX::VFriendService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a8420
//
// 005a8420  68204d4000           push 0x404d20
// 005a8425  687816cb00           push 0xcb1678
// 005a842a  e8e191e5ff           call 0x401610
// 005a842f  83c408               add esp, 8
// 005a8432  e999c0e5ff           jmp 0x4044d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
