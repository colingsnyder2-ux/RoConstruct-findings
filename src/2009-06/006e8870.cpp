// roc 2009-06 006e8870  unit: RBX::GroupDropTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e8870
//
// 006e8870  6840886e00           push 0x6e8840
// 006e8875  681801a500           push 0xa50118
// 006e887a  e8918ed1ff           call 0x401710
// 006e887f  83c408               add esp, 8
// 006e8882  e909ffffff           jmp 0x6e8790
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
