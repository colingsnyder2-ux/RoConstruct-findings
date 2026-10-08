// roc 2007-03 005a0630  unit: seg_005a0000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a0630
//
// 005a0630  64a100000000         mov eax, dword ptr fs:[0]
// 005a0636  8b542404             mov edx, dword ptr [esp + 4]
// 005a063a  6aff                 push -1
// 005a063c  68926f7500           push 0x756f92
// 005a0641  50                   push eax
// 005a0642  64892500000000       mov dword ptr fs:[0], esp
// 005a0649  8b4108               mov eax, dword ptr [ecx + 8]
// 005a064c  83ec44               sub esp, 0x44
// 005a064f  56                   push esi
// 005a0650  beffffff3f           mov esi, 0x3fffffff
// 005a0655  2bf0                 sub esi, eax
// 005a0657  3bf2                 cmp esi, edx
// 005a0659  5e                   pop esi
// 005a065a  7358                 jae 0x5a06b4
// 005a065c  686c637800           push 0x78636c
// 005a0661  8d4c2404             lea ecx, [esp + 4]
// 005a0665  ff1578e77700         call dword ptr [0x77e778]
// 005a066b  8d4c241c             lea ecx, [esp + 0x1c]
// 005a066f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 005a0677  ff1560e97700         call dword ptr [0x77e960]
// 005a067d  8d0424               lea eax, [esp]
// 005a0680  50                   push eax
// 005a0681  8d4c242c             lea ecx, [esp + 0x2c]
// 005a0685  c644245001           mov byte ptr [esp + 0x50], 1
// 005a068a  c7442420383e7800     mov dword ptr [esp + 0x20], 0x783e38
// 005a0692  ff157ce77700         call dword ptr [0x77e77c]
// 005a0698  6870f78300           push 0x83f770
// 005a069d  8d4c2420             lea ecx, [esp + 0x20]
// 005a06a1  51                   push ecx
// 005a06a2  c644245400           mov byte ptr [esp + 0x54], 0
// 005a06a7  c7442424443e7800     mov dword ptr [esp + 0x24], 0x783e44
// 005a06af  e87ae90700           call 0x61f02e
// 005a06b4  03c2                 add eax, edx
// 005a06b6  894108               mov dword ptr [ecx + 8], eax
// 005a06b9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005a06bd  64890d00000000       mov dword ptr fs:[0], ecx
// 005a06c4  83c450               add esp, 0x50
// 005a06c7  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ?_Incsize@?$list@PAVFlagStand@RBX@@V?$allocator@PAVFlagStand@RBX@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
