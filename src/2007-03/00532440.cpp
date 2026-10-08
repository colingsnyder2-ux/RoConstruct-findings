// roc 2007-03 00532440  unit: seg_00530000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00532440
//
// 00532440  6aff                 push -1
// 00532442  686bc37500           push 0x75c36b
// 00532447  64a100000000         mov eax, dword ptr fs:[0]
// 0053244d  50                   push eax
// 0053244e  64892500000000       mov dword ptr fs:[0], esp
// 00532455  51                   push ecx
// 00532456  56                   push esi
// 00532457  6a28                 push 0x28
// 00532459  8bf1                 mov esi, ecx
// 0053245b  e8a8bc0e00           call 0x61e108
// 00532460  83c404               add esp, 4
// 00532463  89442404             mov dword ptr [esp + 4], eax
// 00532467  85c0                 test eax, eax
// 00532469  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00532471  741f                 je 0x532492
// 00532473  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00532477  56                   push esi
// 00532478  51                   push ecx
// 00532479  8bc8                 mov ecx, eax
// 0053247b  e8d0f9ffff           call 0x531e50
// 00532480  5e                   pop esi
// 00532481  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00532485  64890d00000000       mov dword ptr fs:[0], ecx
// 0053248c  83c410               add esp, 0x10
// 0053248f  c20400               ret 4
// 00532492  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00532496  33c0                 xor eax, eax
// 00532498  5e                   pop esi
// 00532499  64890d00000000       mov dword ptr fs:[0], ecx
// 005324a0  83c410               add esp, 0x10
// 005324a3  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
