// roc 2012-06 0096aae0  unit: RBX::GroupDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0096aae0
//
// 0096aae0  6890a49600           push 0x96a490
// 0096aae5  686072e500           push 0xe57260
// 0096aaea  e8b16aa9ff           call 0x4015a0
// 0096aaef  83c408               add esp, 8
// 0096aaf2  e929f9ffff           jmp 0x96a420
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
