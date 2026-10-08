// roc 2008-06 005c7e80  unit: RBX::LaserTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c7e80
//
// 005c7e80  688c969700           push 0x97968c
// 005c7e85  68e0615c00           push 0x5c61e0
// 005c7e8a  e8a1f4f8ff           call 0x557330
// 005c7e8f  83c408               add esp, 8
// 005c7e92  e9d9deffff           jmp 0x5c5d70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
