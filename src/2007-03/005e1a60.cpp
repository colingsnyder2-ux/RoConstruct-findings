// roc 2007-03 005e1a60  unit: seg_005e0000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e1a60
//
// 005e1a60  6aff                 push -1
// 005e1a62  686bc37500           push 0x75c36b
// 005e1a67  64a100000000         mov eax, dword ptr fs:[0]
// 005e1a6d  50                   push eax
// 005e1a6e  64892500000000       mov dword ptr fs:[0], esp
// 005e1a75  51                   push ecx
// 005e1a76  56                   push esi
// 005e1a77  6a28                 push 0x28
// 005e1a79  8bf1                 mov esi, ecx
// 005e1a7b  e888c60300           call 0x61e108
// 005e1a80  83c404               add esp, 4
// 005e1a83  89442404             mov dword ptr [esp + 4], eax
// 005e1a87  85c0                 test eax, eax
// 005e1a89  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e1a91  741f                 je 0x5e1ab2
// 005e1a93  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005e1a97  56                   push esi
// 005e1a98  51                   push ecx
// 005e1a99  8bc8                 mov ecx, eax
// 005e1a9b  e860f4ffff           call 0x5e0f00
// 005e1aa0  5e                   pop esi
// 005e1aa1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e1aa5  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1aac  83c410               add esp, 0x10
// 005e1aaf  c20400               ret 4
// 005e1ab2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e1ab6  33c0                 xor eax, eax
// 005e1ab8  5e                   pop esi
// 005e1ab9  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1ac0  83c410               add esp, 0x10
// 005e1ac3  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
