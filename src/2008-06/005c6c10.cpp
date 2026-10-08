// roc 2008-06 005c6c10  unit: RBX::InletTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c6c10
//
// 005c6c10  685c969700           push 0x97965c
// 005c6c15  6820615c00           push 0x5c6120
// 005c6c1a  e81107f9ff           call 0x557330
// 005c6c1f  83c408               add esp, 8
// 005c6c22  e909ecffff           jmp 0x5c5830
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
