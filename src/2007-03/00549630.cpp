// roc 2007-03 00549630  unit: seg_00540000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00549630
//
// 00549630  688cbd8b00           push 0x8bbd8c
// 00549635  68e0945400           push 0x5494e0
// 0054963a  e811d21d00           call 0x726850
// 0054963f  83c408               add esp, 8
// 00549642  e9a9fdffff           jmp 0x5493f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
