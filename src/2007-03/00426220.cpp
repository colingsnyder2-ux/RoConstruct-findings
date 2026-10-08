// roc 2007-03 00426220  unit: seg_00420000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00426220
//
// 00426220  68fc598b00           push 0x8b59fc
// 00426225  6840234200           push 0x422340
// 0042622a  e821063000           call 0x726850
// 0042622f  83c408               add esp, 8
// 00426232  e9d9b7ffff           jmp 0x421a10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
