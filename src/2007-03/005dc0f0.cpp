// roc 2007-03 005dc0f0  unit: seg_005d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dc0f0
//
// 005dc0f0  685cd88b00           push 0x8bd85c
// 005dc0f5  6890835800           push 0x588390
// 005dc0fa  e851a71400           call 0x726850
// 005dc0ff  83c408               add esp, 8
// 005dc102  e989c0faff           jmp 0x588190
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
