// roc 2007-03 00457210  unit: seg_00450000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00457210
//
// 00457210  6888658b00           push 0x8b6588
// 00457215  6850604500           push 0x456050
// 0045721a  e831f62c00           call 0x726850
// 0045721f  83c408               add esp, 8
// 00457222  e999e9ffff           jmp 0x455bc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
