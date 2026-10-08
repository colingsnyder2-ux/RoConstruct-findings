// roc 2008-06 0048e4f0  unit: RBX::Network::VPlayer::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e4f0
//
// 0048e4f0  6aff                 push -1
// 0048e4f2  683bf47b00           push 0x7bf43b
// 0048e4f7  64a100000000         mov eax, dword ptr fs:[0]
// 0048e4fd  50                   push eax
// 0048e4fe  64892500000000       mov dword ptr fs:[0], esp
// 0048e505  51                   push ecx
// 0048e506  56                   push esi
// 0048e507  6a38                 push 0x38
// 0048e509  8bf1                 mov esi, ecx
// 0048e50b  e810242100           call 0x6a0920
// 0048e510  83c404               add esp, 4
// 0048e513  89442404             mov dword ptr [esp + 4], eax
// 0048e517  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048e51f  85c0                 test eax, eax
// 0048e521  741f                 je 0x48e542
// 0048e523  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0048e527  56                   push esi
// 0048e528  51                   push ecx
// 0048e529  8bc8                 mov ecx, eax
// 0048e52b  e8a0fdffff           call 0x48e2d0
// 0048e530  5e                   pop esi
// 0048e531  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048e535  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e53c  83c410               add esp, 0x10
// 0048e53f  c20400               ret 4
// 0048e542  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048e546  33c0                 xor eax, eax
// 0048e548  5e                   pop esi
// 0048e549  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e550  83c410               add esp, 0x10
// 0048e553  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
