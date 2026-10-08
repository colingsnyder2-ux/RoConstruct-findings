// roc 2007-08 0062b240  unit: RBX::GroupDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062b240
//
// 0062b240  6800838c00           push 0x8c8300
// 0062b245  6820ae6200           push 0x62ae20
// 0062b24a  e8d1a20f00           call 0x725520
// 0062b24f  83c408               add esp, 8
// 0062b252  e959fbffff           jmp 0x62adb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
