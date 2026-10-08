// roc 2008-06 005c7290  unit: RBX::AnchorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c7290
//
// 005c7290  6874969700           push 0x979674
// 005c7295  6880615c00           push 0x5c6180
// 005c729a  e89100f9ff           call 0x557330
// 005c729f  83c408               add esp, 8
// 005c72a2  e929e8ffff           jmp 0x5c5ad0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
