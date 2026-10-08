// roc 2009-06 006e8de0  unit: RBX::PartDropTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e8de0
//
// 006e8de0  68208c6e00           push 0x6e8c20
// 006e8de5  683001a500           push 0xa50130
// 006e8dea  e82189d1ff           call 0x401710
// 006e8def  83c408               add esp, 8
// 006e8df2  e959fcffff           jmp 0x6e8a50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
