// roc 2007-03 00495a10  unit: seg_00490000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00495a10
//
// 00495a10  684c868b00           push 0x8b864c
// 00495a15  6870bf4800           push 0x48bf70
// 00495a1a  e8310e2900           call 0x726850
// 00495a1f  83c408               add esp, 8
// 00495a22  e9395effff           jmp 0x48b860
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
