// roc 2009-12 007abd70  unit: RBX::HUMAN::Landed  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007abd70
//
// 007abd70  6860bd7a00           push 0x7abd60
// 007abd75  68988ab900           push 0xb98a98
// 007abd7a  e8b158c5ff           call 0x401630
// 007abd7f  83c408               add esp, 8
// 007abd82  e969ffffff           jmp 0x7abcf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
