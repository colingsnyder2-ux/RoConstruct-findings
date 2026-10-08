// roc 2008-06 00634fc0  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634fc0
//
// 00634fc0  6aff                 push -1
// 00634fc2  683bf47b00           push 0x7bf43b
// 00634fc7  64a100000000         mov eax, dword ptr fs:[0]
// 00634fcd  50                   push eax
// 00634fce  64892500000000       mov dword ptr fs:[0], esp
// 00634fd5  51                   push ecx
// 00634fd6  56                   push esi
// 00634fd7  6a38                 push 0x38
// 00634fd9  8bf1                 mov esi, ecx
// 00634fdb  e840b90600           call 0x6a0920
// 00634fe0  83c404               add esp, 4
// 00634fe3  89442404             mov dword ptr [esp + 4], eax
// 00634fe7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00634fef  85c0                 test eax, eax
// 00634ff1  741f                 je 0x635012
// 00634ff3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00634ff7  56                   push esi
// 00634ff8  51                   push ecx
// 00634ff9  8bc8                 mov ecx, eax
// 00634ffb  e850ffffff           call 0x634f50
// 00635000  5e                   pop esi
// 00635001  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00635005  64890d00000000       mov dword ptr fs:[0], ecx
// 0063500c  83c410               add esp, 0x10
// 0063500f  c20400               ret 4
// 00635012  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00635016  33c0                 xor eax, eax
// 00635018  5e                   pop esi
// 00635019  64890d00000000       mov dword ptr fs:[0], ecx
// 00635020  83c410               add esp, 0x10
// 00635023  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
