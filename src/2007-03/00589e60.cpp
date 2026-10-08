// roc 2007-03 00589e60  unit: seg_00580000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00589e60
//
// 00589e60  6868d88b00           push 0x8bd868
// 00589e65  68c0835800           push 0x5883c0
// 00589e6a  e8e1c91900           call 0x726850
// 00589e6f  83c408               add esp, 8
// 00589e72  e969e4ffff           jmp 0x5882e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
