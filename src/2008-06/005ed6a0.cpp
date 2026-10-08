// roc 2008-06 005ed6a0  unit: RBX::Controller::W4InputType::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed6a0
//
// 005ed6a0  681cb19700           push 0x97b11c
// 005ed6a5  6820d65e00           push 0x5ed620
// 005ed6aa  e8819cf6ff           call 0x557330
// 005ed6af  83c408               add esp, 8
// 005ed6b2  e909ffffff           jmp 0x5ed5c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
