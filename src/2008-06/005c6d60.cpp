// roc 2008-06 005c6d60  unit: RBX::HingeTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c6d60
//
// 005c6d60  6860969700           push 0x979660
// 005c6d65  6830615c00           push 0x5c6130
// 005c6d6a  e8c105f9ff           call 0x557330
// 005c6d6f  83c408               add esp, 8
// 005c6d72  e929ebffff           jmp 0x5c58a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
