// roc 2007-03 005e1980  unit: seg_005e0000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e1980
//
// 005e1980  6aff                 push -1
// 005e1982  686bc37500           push 0x75c36b
// 005e1987  64a100000000         mov eax, dword ptr fs:[0]
// 005e198d  50                   push eax
// 005e198e  64892500000000       mov dword ptr fs:[0], esp
// 005e1995  51                   push ecx
// 005e1996  56                   push esi
// 005e1997  6a28                 push 0x28
// 005e1999  8bf1                 mov esi, ecx
// 005e199b  e868c70300           call 0x61e108
// 005e19a0  83c404               add esp, 4
// 005e19a3  89442404             mov dword ptr [esp + 4], eax
// 005e19a7  85c0                 test eax, eax
// 005e19a9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e19b1  741f                 je 0x5e19d2
// 005e19b3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005e19b7  56                   push esi
// 005e19b8  51                   push ecx
// 005e19b9  8bc8                 mov ecx, eax
// 005e19bb  e860f4ffff           call 0x5e0e20
// 005e19c0  5e                   pop esi
// 005e19c1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e19c5  64890d00000000       mov dword ptr fs:[0], ecx
// 005e19cc  83c410               add esp, 0x10
// 005e19cf  c20400               ret 4
// 005e19d2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e19d6  33c0                 xor eax, eax
// 005e19d8  5e                   pop esi
// 005e19d9  64890d00000000       mov dword ptr fs:[0], ecx
// 005e19e0  83c410               add esp, 0x10
// 005e19e3  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
