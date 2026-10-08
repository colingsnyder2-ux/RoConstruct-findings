// roc 2011-06 00a1d630  unit: seg_00a10000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a1d630
//
// 00a1d630  33c9                 xor ecx, ecx
// 00a1d632  51                   push ecx
// 00a1d633  68e4a4a800           push 0xa8a4e4
// 00a1d638  51                   push ecx
// 00a1d639  b810755b00           mov eax, 0x5b7510
// 00a1d63e  50                   push eax
// 00a1d63f  b920e1cb00           mov ecx, 0xcbe120
// 00a1d644  e8e7a1b9ff           call 0x5b7830
// 00a1d649  68e058a300           push 0xa358e0
// 00a1d64e  e80adbdeff           call 0x80b15d
// 00a1d653  59                   pop ecx
// 00a1d654  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??__EresetFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
