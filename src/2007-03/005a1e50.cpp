// roc 2007-03 005a1e50  unit: seg_005a0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a1e50
//
// 005a1e50  683c838b00           push 0x8b833c
// 005a1e55  6810594800           push 0x485910
// 005a1e5a  e8f1491800           call 0x726850
// 005a1e5f  83c408               add esp, 8
// 005a1e62  e99932eeff           jmp 0x485100
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
