// roc 2012-06 00961190  unit: RBX::HUMAN::GettingUp  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00961190
//
// 00961190  6830119600           push 0x961130
// 00961195  687071e500           push 0xe57170
// 0096119a  e80104aaff           call 0x4015a0
// 0096119f  83c408               add esp, 8
// 009611a2  e919ffffff           jmp 0x9610c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
