// roc 2008-06 004b2150  unit: RBX::Network::VReplicator::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2150
//
// 004b2150  6aff                 push -1
// 004b2152  683bf47b00           push 0x7bf43b
// 004b2157  64a100000000         mov eax, dword ptr fs:[0]
// 004b215d  50                   push eax
// 004b215e  64892500000000       mov dword ptr fs:[0], esp
// 004b2165  51                   push ecx
// 004b2166  56                   push esi
// 004b2167  6a38                 push 0x38
// 004b2169  8bf1                 mov esi, ecx
// 004b216b  e8b0e71e00           call 0x6a0920
// 004b2170  83c404               add esp, 4
// 004b2173  89442404             mov dword ptr [esp + 4], eax
// 004b2177  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b217f  85c0                 test eax, eax
// 004b2181  741f                 je 0x4b21a2
// 004b2183  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004b2187  56                   push esi
// 004b2188  51                   push ecx
// 004b2189  8bc8                 mov ecx, eax
// 004b218b  e850ffffff           call 0x4b20e0
// 004b2190  5e                   pop esi
// 004b2191  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b2195  64890d00000000       mov dword ptr fs:[0], ecx
// 004b219c  83c410               add esp, 0x10
// 004b219f  c20400               ret 4
// 004b21a2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b21a6  33c0                 xor eax, eax
// 004b21a8  5e                   pop esi
// 004b21a9  64890d00000000       mov dword ptr fs:[0], ecx
// 004b21b0  83c410               add esp, 0x10
// 004b21b3  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
