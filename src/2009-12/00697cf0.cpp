// roc 2009-12 00697cf0  unit: RBX::DecalTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00697cf0
//
// 00697cf0  68906d6900           push 0x696d90
// 00697cf5  685c16b900           push 0xb9165c
// 00697cfa  e83199d6ff           call 0x401630
// 00697cff  83c408               add esp, 8
// 00697d02  e919f0ffff           jmp 0x696d20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
