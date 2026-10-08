// roc 2012-06 0096b890  unit: RBX::HUMAN::MovingNoPhysicsBase  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0096b890
//
// 0096b890  6880b69600           push 0x96b680
// 0096b895  688072e500           push 0xe57280
// 0096b89a  e8015da9ff           call 0x4015a0
// 0096b89f  83c408               add esp, 8
// 0096b8a2  e919faffff           jmp 0x96b2c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
