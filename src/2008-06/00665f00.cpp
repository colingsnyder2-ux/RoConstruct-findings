// roc 2008-06 00665f00  unit: RBX::PartDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00665f00
//
// 00665f00  6864d99700           push 0x97d964
// 00665f05  68f05a6600           push 0x665af0
// 00665f0a  e82114efff           call 0x557330
// 00665f0f  83c408               add esp, 8
// 00665f12  e919fbffff           jmp 0x665a30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
