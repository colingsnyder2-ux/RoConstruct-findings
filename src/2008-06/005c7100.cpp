// roc 2008-06 005c7100  unit: RBX::ModelSetFrontTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c7100
//
// 005c7100  6870969700           push 0x979670
// 005c7105  6870615c00           push 0x5c6170
// 005c710a  e82102f9ff           call 0x557330
// 005c710f  83c408               add esp, 8
// 005c7112  e949e9ffff           jmp 0x5c5a60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
