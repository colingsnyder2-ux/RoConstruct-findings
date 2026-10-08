// roc 2011-06 00a1cdd0  unit: seg_00a10000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1cdd0
//
// 00a1cdd0  33c9                 xor ecx, ecx
// 00a1cdd2  51                   push ecx
// 00a1cdd3  68dca4a800           push 0xa8a4dc
// 00a1cdd8  51                   push ecx
// 00a1cdd9  b8c04e5a00           mov eax, 0x5a4ec0
// 00a1cdde  50                   push eax
// 00a1cddf  b998cfcb00           mov ecx, 0xcbcf98
// 00a1cde4  e8e75eb8ff           call 0x5a2cd0
// 00a1cde9  68b053a300           push 0xa353b0
// 00a1cdee  e86ae3deff           call 0x80b15d
// 00a1cdf3  59                   pop ecx
// 00a1cdf4  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??__EpauseFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
