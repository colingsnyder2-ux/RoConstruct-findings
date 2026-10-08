// roc 2007-08 005d28c0  unit: RBX::ToolMouseCommand  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d28c0
//
// 005d28c0  685c688c00           push 0x8c685c
// 005d28c5  68901e5d00           push 0x5d1e90
// 005d28ca  e8512c1500           call 0x725520
// 005d28cf  83c408               add esp, 8
// 005d28d2  e939f4ffff           jmp 0x5d1d10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
