// roc 2009-12 006ffe80  unit: RBX::VTeams::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ffe80
//
// 006ffe80  6820694f00           push 0x4f6920
// 006ffe85  687cdeb700           push 0xb7de7c
// 006ffe8a  e8a117d0ff           call 0x401630
// 006ffe8f  83c408               add esp, 8
// 006ffe92  e9595ddfff           jmp 0x4f5bf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
