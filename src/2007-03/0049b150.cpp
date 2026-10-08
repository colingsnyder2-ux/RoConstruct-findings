// roc 2007-03 0049b150  unit: seg_00490000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049b150
//
// 0049b150  6834898b00           push 0x8b8934
// 0049b155  68602a4900           push 0x492a60
// 0049b15a  e8f1b62800           call 0x726850
// 0049b15f  83c408               add esp, 8
// 0049b162  e97978ffff           jmp 0x4929e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
