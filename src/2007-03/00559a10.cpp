// roc 2007-03 00559a10  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00559a10
//
// 00559a10  6868c28b00           push 0x8bc268
// 00559a15  68905d5500           push 0x555d90
// 00559a1a  e831ce1c00           call 0x726850
// 00559a1f  83c408               add esp, 8
// 00559a22  e9d9b2ffff           jmp 0x554d00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
