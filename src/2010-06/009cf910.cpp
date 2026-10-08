// roc 2010-06 009cf910  unit: seg_009c0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009cf910
//
// 009cf910  33c9                 xor ecx, ecx
// 009cf912  51                   push ecx
// 009cf913  68d8a2a200           push 0xa2a2d8
// 009cf918  51                   push ecx
// 009cf919  b8d0836200           mov eax, 0x6283d0
// 009cf91e  50                   push eax
// 009cf91f  b918a4c100           mov ecx, 0xc1a418
// 009cf924  e88758c5ff           call 0x6251b0
// 009cf929  6820319e00           push 0x9e3120
// 009cf92e  e83091ddff           call 0x7a8a63
// 009cf933  59                   pop ecx
// 009cf934  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??__EpauseFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
