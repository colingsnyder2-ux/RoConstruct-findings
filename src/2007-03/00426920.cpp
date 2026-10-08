// roc 2007-03 00426920  unit: seg_00420000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00426920
//
// 00426920  68085a8b00           push 0x8b5a08
// 00426925  6870234200           push 0x422370
// 0042692a  e821ff2f00           call 0x726850
// 0042692f  83c408               add esp, 8
// 00426932  e959b2ffff           jmp 0x421b90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
