// roc 2009-06 0088da90  unit: seg_00880000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088da90
//
// 0088da90  33c9                 xor ecx, ecx
// 0088da92  51                   push ecx
// 0088da93  68d0548d00           push 0x8d54d0
// 0088da98  51                   push ecx
// 0088da99  b8d0976400           mov eax, 0x6497d0
// 0088da9e  50                   push eax
// 0088da9f  b960bea400           mov ecx, 0xa4be60
// 0088daa4  e8178fdbff           call 0x6469c0
// 0088daa9  6860a38900           push 0x89a360
// 0088daae  e848c0e8ff           call 0x719afb
// 0088dab3  59                   pop ecx
// 0088dab4  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??__EpauseFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
