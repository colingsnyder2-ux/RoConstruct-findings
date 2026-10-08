// roc 2008-06 0062a6f0  unit: RBX::VExplosion::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062a6f0
//
// 0062a6f0  6aff                 push -1
// 0062a6f2  683bf47b00           push 0x7bf43b
// 0062a6f7  64a100000000         mov eax, dword ptr fs:[0]
// 0062a6fd  50                   push eax
// 0062a6fe  64892500000000       mov dword ptr fs:[0], esp
// 0062a705  51                   push ecx
// 0062a706  56                   push esi
// 0062a707  6a38                 push 0x38
// 0062a709  8bf1                 mov esi, ecx
// 0062a70b  e810620700           call 0x6a0920
// 0062a710  83c404               add esp, 4
// 0062a713  89442404             mov dword ptr [esp + 4], eax
// 0062a717  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062a71f  85c0                 test eax, eax
// 0062a721  741f                 je 0x62a742
// 0062a723  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0062a727  56                   push esi
// 0062a728  51                   push ecx
// 0062a729  8bc8                 mov ecx, eax
// 0062a72b  e850ffffff           call 0x62a680
// 0062a730  5e                   pop esi
// 0062a731  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062a735  64890d00000000       mov dword ptr fs:[0], ecx
// 0062a73c  83c410               add esp, 0x10
// 0062a73f  c20400               ret 4
// 0062a742  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062a746  33c0                 xor eax, eax
// 0062a748  5e                   pop esi
// 0062a749  64890d00000000       mov dword ptr fs:[0], ecx
// 0062a750  83c410               add esp, 0x10
// 0062a753  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
