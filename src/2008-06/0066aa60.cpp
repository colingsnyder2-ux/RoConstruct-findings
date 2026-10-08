// roc 2008-06 0066aa60  unit: RBX::GroupDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066aa60
//
// 0066aa60  6808da9700           push 0x97da08
// 0066aa65  6820a66600           push 0x66a620
// 0066aa6a  e8c1c8eeff           call 0x557330
// 0066aa6f  83c408               add esp, 8
// 0066aa72  e939fbffff           jmp 0x66a5b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
