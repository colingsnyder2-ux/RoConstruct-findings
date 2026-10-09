// roc 2009-12 007d6cd0  unit: RBX::PartDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d6cd0
//
// 007d6cd0  6800697d00           push 0x7d6900
// 007d6cd5  68488eb900           push 0xb98e48
// 007d6cda  e851a9c2ff           call 0x401630
// 007d6cdf  83c408               add esp, 8
// 007d6ce2  e9a9fbffff           jmp 0x7d6890
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
