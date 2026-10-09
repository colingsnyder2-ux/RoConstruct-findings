// roc 2009-12 0063d490  unit: RBX::VTeam::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0063d490
//
// 0063d490  6810414000           push 0x404110
// 0063d495  688895b700           push 0xb79588
// 0063d49a  e89141dcff           call 0x401630
// 0063d49f  83c408               add esp, 8
// 0063d4a2  e9b964dcff           jmp 0x403960
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
