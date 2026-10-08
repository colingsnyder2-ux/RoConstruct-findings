// roc 2010-06 00783f10  unit: RBX::PartDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00783f10
//
// 00783f10  68503b7800           push 0x783b50
// 00783f15  68ec34c200           push 0xc234ec
// 00783f1a  e871d7c7ff           call 0x401690
// 00783f1f  83c408               add esp, 8
// 00783f22  e9b9fbffff           jmp 0x783ae0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
