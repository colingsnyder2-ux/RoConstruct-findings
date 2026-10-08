// roc 2008-06 0060aba0  unit: RBX::VHole::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060aba0
//
// 0060aba0  68bc539700           push 0x9753bc
// 0060aba5  6880dd5700           push 0x57dd80
// 0060abaa  e881c7f4ff           call 0x557330
// 0060abaf  83c408               add esp, 8
// 0060abb2  e9292bf7ff           jmp 0x57d6e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
