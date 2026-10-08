// roc 2008-06 00559690  unit: RBX::VInstance::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00559690
//
// 00559690  6aff                 push -1
// 00559692  683bf47b00           push 0x7bf43b
// 00559697  64a100000000         mov eax, dword ptr fs:[0]
// 0055969d  50                   push eax
// 0055969e  64892500000000       mov dword ptr fs:[0], esp
// 005596a5  51                   push ecx
// 005596a6  56                   push esi
// 005596a7  6a38                 push 0x38
// 005596a9  8bf1                 mov esi, ecx
// 005596ab  e870721400           call 0x6a0920
// 005596b0  83c404               add esp, 4
// 005596b3  89442404             mov dword ptr [esp + 4], eax
// 005596b7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005596bf  85c0                 test eax, eax
// 005596c1  741f                 je 0x5596e2
// 005596c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005596c7  56                   push esi
// 005596c8  51                   push ecx
// 005596c9  8bc8                 mov ecx, eax
// 005596cb  e850ffffff           call 0x559620
// 005596d0  5e                   pop esi
// 005596d1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005596d5  64890d00000000       mov dword ptr fs:[0], ecx
// 005596dc  83c410               add esp, 0x10
// 005596df  c20400               ret 4
// 005596e2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005596e6  33c0                 xor eax, eax
// 005596e8  5e                   pop esi
// 005596e9  64890d00000000       mov dword ptr fs:[0], ecx
// 005596f0  83c410               add esp, 0x10
// 005596f3  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
