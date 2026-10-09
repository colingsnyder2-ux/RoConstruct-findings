// roc 2009-12 007dbe20  unit: RBX::GroupDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007dbe20
//
// 007dbe20  6890b97d00           push 0x7db990
// 007dbe25  681c90b900           push 0xb9901c
// 007dbe2a  e80158c2ff           call 0x401630
// 007dbe2f  83c408               add esp, 8
// 007dbe32  e9e9faffff           jmp 0x7db920
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
