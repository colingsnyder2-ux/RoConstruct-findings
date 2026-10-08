// roc 2007-03 005e1ad0  unit: seg_005e0000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e1ad0
//
// 005e1ad0  6aff                 push -1
// 005e1ad2  686bc37500           push 0x75c36b
// 005e1ad7  64a100000000         mov eax, dword ptr fs:[0]
// 005e1add  50                   push eax
// 005e1ade  64892500000000       mov dword ptr fs:[0], esp
// 005e1ae5  51                   push ecx
// 005e1ae6  56                   push esi
// 005e1ae7  6a28                 push 0x28
// 005e1ae9  8bf1                 mov esi, ecx
// 005e1aeb  e818c60300           call 0x61e108
// 005e1af0  83c404               add esp, 4
// 005e1af3  89442404             mov dword ptr [esp + 4], eax
// 005e1af7  85c0                 test eax, eax
// 005e1af9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e1b01  741f                 je 0x5e1b22
// 005e1b03  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005e1b07  56                   push esi
// 005e1b08  51                   push ecx
// 005e1b09  8bc8                 mov ecx, eax
// 005e1b0b  e860f4ffff           call 0x5e0f70
// 005e1b10  5e                   pop esi
// 005e1b11  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e1b15  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1b1c  83c410               add esp, 0x10
// 005e1b1f  c20400               ret 4
// 005e1b22  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e1b26  33c0                 xor eax, eax
// 005e1b28  5e                   pop esi
// 005e1b29  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1b30  83c410               add esp, 0x10
// 005e1b33  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
