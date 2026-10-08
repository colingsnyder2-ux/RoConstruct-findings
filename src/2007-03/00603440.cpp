// roc 2007-03 00603440  unit: seg_00600000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00603440
//
// 00603440  6aff                 push -1
// 00603442  686bc37500           push 0x75c36b
// 00603447  64a100000000         mov eax, dword ptr fs:[0]
// 0060344d  50                   push eax
// 0060344e  64892500000000       mov dword ptr fs:[0], esp
// 00603455  51                   push ecx
// 00603456  56                   push esi
// 00603457  6a28                 push 0x28
// 00603459  8bf1                 mov esi, ecx
// 0060345b  e8a8ac0100           call 0x61e108
// 00603460  83c404               add esp, 4
// 00603463  89442404             mov dword ptr [esp + 4], eax
// 00603467  85c0                 test eax, eax
// 00603469  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00603471  741f                 je 0x603492
// 00603473  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00603477  56                   push esi
// 00603478  51                   push ecx
// 00603479  8bc8                 mov ecx, eax
// 0060347b  e840fdffff           call 0x6031c0
// 00603480  5e                   pop esi
// 00603481  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00603485  64890d00000000       mov dword ptr fs:[0], ecx
// 0060348c  83c410               add esp, 0x10
// 0060348f  c20400               ret 4
// 00603492  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00603496  33c0                 xor eax, eax
// 00603498  5e                   pop esi
// 00603499  64890d00000000       mov dword ptr fs:[0], ecx
// 006034a0  83c410               add esp, 0x10
// 006034a3  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
