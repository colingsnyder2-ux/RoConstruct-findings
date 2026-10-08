// roc 2008-06 00556290  unit: RBX::VRunService::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00556290
//
// 00556290  6aff                 push -1
// 00556292  683bf47b00           push 0x7bf43b
// 00556297  64a100000000         mov eax, dword ptr fs:[0]
// 0055629d  50                   push eax
// 0055629e  64892500000000       mov dword ptr fs:[0], esp
// 005562a5  51                   push ecx
// 005562a6  56                   push esi
// 005562a7  6a38                 push 0x38
// 005562a9  8bf1                 mov esi, ecx
// 005562ab  e870a61400           call 0x6a0920
// 005562b0  83c404               add esp, 4
// 005562b3  89442404             mov dword ptr [esp + 4], eax
// 005562b7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005562bf  85c0                 test eax, eax
// 005562c1  741f                 je 0x5562e2
// 005562c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005562c7  56                   push esi
// 005562c8  51                   push ecx
// 005562c9  8bc8                 mov ecx, eax
// 005562cb  e850ffffff           call 0x556220
// 005562d0  5e                   pop esi
// 005562d1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005562d5  64890d00000000       mov dword ptr fs:[0], ecx
// 005562dc  83c410               add esp, 0x10
// 005562df  c20400               ret 4
// 005562e2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005562e6  33c0                 xor eax, eax
// 005562e8  5e                   pop esi
// 005562e9  64890d00000000       mov dword ptr fs:[0], ecx
// 005562f0  83c410               add esp, 0x10
// 005562f3  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
