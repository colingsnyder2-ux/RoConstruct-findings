// roc 2008-06 006182c0  unit: RBX::NullTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006182c0
//
// 006182c0  6898969700           push 0x979698
// 006182c5  6810625c00           push 0x5c6210
// 006182ca  e861f0f3ff           call 0x557330
// 006182cf  83c408               add esp, 8
// 006182d2  e9e9dbfaff           jmp 0x5c5ec0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
