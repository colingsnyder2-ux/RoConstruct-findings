// roc 2007-03 005e19f0  unit: seg_005e0000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e19f0
//
// 005e19f0  6aff                 push -1
// 005e19f2  686bc37500           push 0x75c36b
// 005e19f7  64a100000000         mov eax, dword ptr fs:[0]
// 005e19fd  50                   push eax
// 005e19fe  64892500000000       mov dword ptr fs:[0], esp
// 005e1a05  51                   push ecx
// 005e1a06  56                   push esi
// 005e1a07  6a28                 push 0x28
// 005e1a09  8bf1                 mov esi, ecx
// 005e1a0b  e8f8c60300           call 0x61e108
// 005e1a10  83c404               add esp, 4
// 005e1a13  89442404             mov dword ptr [esp + 4], eax
// 005e1a17  85c0                 test eax, eax
// 005e1a19  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e1a21  741f                 je 0x5e1a42
// 005e1a23  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005e1a27  56                   push esi
// 005e1a28  51                   push ecx
// 005e1a29  8bc8                 mov ecx, eax
// 005e1a2b  e860f4ffff           call 0x5e0e90
// 005e1a30  5e                   pop esi
// 005e1a31  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e1a35  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1a3c  83c410               add esp, 0x10
// 005e1a3f  c20400               ret 4
// 005e1a42  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e1a46  33c0                 xor eax, eax
// 005e1a48  5e                   pop esi
// 005e1a49  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1a50  83c410               add esp, 0x10
// 005e1a53  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
