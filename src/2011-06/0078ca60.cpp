// roc 2011-06 0078ca60  unit: RBX::NewNullTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0078ca60
//
// 0078ca60  6870c97800           push 0x78c970
// 0078ca65  681855cd00           push 0xcd5518
// 0078ca6a  e8a14bc7ff           call 0x401610
// 0078ca6f  83c408               add esp, 8
// 0078ca72  e999fdffff           jmp 0x78c810
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
