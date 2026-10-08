// roc 2008-06 005c6970  unit: RBX::WeldTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c6970
//
// 005c6970  6854969700           push 0x979654
// 005c6975  6800615c00           push 0x5c6100
// 005c697a  e8b109f9ff           call 0x557330
// 005c697f  83c408               add esp, 8
// 005c6982  e9c9edffff           jmp 0x5c5750
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
