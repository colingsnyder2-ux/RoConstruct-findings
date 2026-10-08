// roc 2009-06 00654c10  unit: RBX::LockTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00654c10
//
// 00654c10  6800356500           push 0x653500
// 00654c15  6890c7a400           push 0xa4c790
// 00654c1a  e8f1cadaff           call 0x401710
// 00654c1f  83c408               add esp, 8
// 00654c22  e919e2ffff           jmp 0x652e40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
