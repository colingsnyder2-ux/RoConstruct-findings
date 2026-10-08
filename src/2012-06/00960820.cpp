// roc 2012-06 00960820  unit: RBX::HUMAN::Jumping  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00960820
//
// 00960820  68d0079600           push 0x9607d0
// 00960825  685871e500           push 0xe57158
// 0096082a  e8710daaff           call 0x4015a0
// 0096082f  83c408               add esp, 8
// 00960832  e929ffffff           jmp 0x960760
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
