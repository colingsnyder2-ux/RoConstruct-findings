// roc 2007-03 005a9740  unit: seg_005a0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a9740
//
// 005a9740  682c8f8b00           push 0x8b8f2c
// 005a9745  68f0d04900           push 0x49d0f0
// 005a974a  e801d11700           call 0x726850
// 005a974f  83c408               add esp, 8
// 005a9752  e9492cefff           jmp 0x49c3a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
