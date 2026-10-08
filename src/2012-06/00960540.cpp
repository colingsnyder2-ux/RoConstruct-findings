// roc 2012-06 00960540  unit: RBX::HUMAN::Freefall  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00960540
//
// 00960540  6840019600           push 0x960140
// 00960545  684071e500           push 0xe57140
// 0096054a  e85110aaff           call 0x4015a0
// 0096054f  83c408               add esp, 8
// 00960552  e9f9f9ffff           jmp 0x95ff50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
