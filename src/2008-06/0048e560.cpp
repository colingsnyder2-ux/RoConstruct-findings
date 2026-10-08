// roc 2008-06 0048e560  unit: RBX::VRunService::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e560
//
// 0048e560  6aff                 push -1
// 0048e562  683bf47b00           push 0x7bf43b
// 0048e567  64a100000000         mov eax, dword ptr fs:[0]
// 0048e56d  50                   push eax
// 0048e56e  64892500000000       mov dword ptr fs:[0], esp
// 0048e575  51                   push ecx
// 0048e576  56                   push esi
// 0048e577  6a38                 push 0x38
// 0048e579  8bf1                 mov esi, ecx
// 0048e57b  e8a0232100           call 0x6a0920
// 0048e580  83c404               add esp, 4
// 0048e583  89442404             mov dword ptr [esp + 4], eax
// 0048e587  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048e58f  85c0                 test eax, eax
// 0048e591  741f                 je 0x48e5b2
// 0048e593  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0048e597  56                   push esi
// 0048e598  51                   push ecx
// 0048e599  8bc8                 mov ecx, eax
// 0048e59b  e8a0fdffff           call 0x48e340
// 0048e5a0  5e                   pop esi
// 0048e5a1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048e5a5  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e5ac  83c410               add esp, 0x10
// 0048e5af  c20400               ret 4
// 0048e5b2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048e5b6  33c0                 xor eax, eax
// 0048e5b8  5e                   pop esi
// 0048e5b9  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e5c0  83c410               add esp, 0x10
// 0048e5c3  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
