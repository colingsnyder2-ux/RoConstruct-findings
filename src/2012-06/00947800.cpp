// roc 2012-06 00947800  unit: RBX::GrabTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00947800
//
// 00947800  68a0458a00           push 0x8a45a0
// 00947805  688c2fe500           push 0xe52f8c
// 0094780a  e8919dabff           call 0x4015a0
// 0094780f  83c408               add esp, 8
// 00947812  e989c7f5ff           jmp 0x8a3fa0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
