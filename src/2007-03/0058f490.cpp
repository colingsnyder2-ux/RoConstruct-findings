// roc 2007-03 0058f490  unit: seg_00580000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058f490
//
// 0058f490  688c658b00           push 0x8b658c
// 0058f495  6860604500           push 0x456060
// 0058f49a  e8b1731900           call 0x726850
// 0058f49f  83c408               add esp, 8
// 0058f4a2  e99967ecff           jmp 0x455c40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
