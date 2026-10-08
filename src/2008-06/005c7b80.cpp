// roc 2008-06 005c7b80  unit: RBX::SlingshotTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c7b80
//
// 005c7b80  687c969700           push 0x97967c
// 005c7b85  68a0615c00           push 0x5c61a0
// 005c7b8a  e8a1f7f8ff           call 0x557330
// 005c7b8f  83c408               add esp, 8
// 005c7b92  e919e0ffff           jmp 0x5c5bb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
