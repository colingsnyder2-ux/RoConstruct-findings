// roc 2012-06 00859930  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00859930
//
// 00859930  64a100000000         mov eax, dword ptr fs:[0]
// 00859936  8b542404             mov edx, dword ptr [esp + 4]
// 0085993a  6aff                 push -1
// 0085993c  684269aa00           push 0xaa6942
// 00859941  50                   push eax
// 00859942  64892500000000       mov dword ptr fs:[0], esp
// 00859949  8b4108               mov eax, dword ptr [ecx + 8]
// 0085994c  83ec44               sub esp, 0x44
// 0085994f  56                   push esi
// 00859950  beffffff3f           mov esi, 0x3fffffff
// 00859955  2bf0                 sub esi, eax
// 00859957  3bf2                 cmp esi, edx
// 00859959  5e                   pop esi
// 0085995a  7358                 jae 0x8599b4
// 0085995c  6824f5b400           push 0xb4f524
// 00859961  8d4c2404             lea ecx, [esp + 4]
// 00859965  ff154826b200         call dword ptr [0xb22648]
// 0085996b  8d4c241c             lea ecx, [esp + 0x1c]
// 0085996f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00859977  ff15dc29b200         call dword ptr [0xb229dc]
// 0085997d  8d0424               lea eax, [esp]
// 00859980  50                   push eax
// 00859981  8d4c242c             lea ecx, [esp + 0x2c]
// 00859985  c644245001           mov byte ptr [esp + 0x50], 1
// 0085998a  c7442420a02eb400     mov dword ptr [esp + 0x20], 0xb42ea0
// 00859992  ff154426b200         call dword ptr [0xb22644]
// 00859998  680462cd00           push 0xcd6204
// 0085999d  8d4c2420             lea ecx, [esp + 0x20]
// 008599a1  51                   push ecx
// 008599a2  c644245400           mov byte ptr [esp + 0x54], 0
// 008599a7  c7442424ac2eb400     mov dword ptr [esp + 0x24], 0xb42eac
// 008599af  e890971200           call 0x983144
// 008599b4  03c2                 add eax, edx
// 008599b6  894108               mov dword ptr [ecx + 8], eax
// 008599b9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008599bd  64890d00000000       mov dword ptr fs:[0], ecx
// 008599c4  83c450               add esp, 0x50
// 008599c7  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ?_Incsize@?$list@PAVFlagStand@RBX@@V?$allocator@PAVFlagStand@RBX@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
