// roc 2010-06 00647170  unit: RBX::GlueTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00647170
//
// 00647170  6810676400           push 0x646710
// 00647175  6868b8c100           push 0xc1b868
// 0064717a  e811a5dbff           call 0x401690
// 0064717f  83c408               add esp, 8
// 00647182  e9b9eaffff           jmp 0x645c40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
