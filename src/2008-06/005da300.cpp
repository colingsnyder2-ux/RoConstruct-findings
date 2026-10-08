// roc 2008-06 005da300  unit: RBX::VHumanoid::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005da300
//
// 005da300  6aff                 push -1
// 005da302  683bf47b00           push 0x7bf43b
// 005da307  64a100000000         mov eax, dword ptr fs:[0]
// 005da30d  50                   push eax
// 005da30e  64892500000000       mov dword ptr fs:[0], esp
// 005da315  51                   push ecx
// 005da316  56                   push esi
// 005da317  6a38                 push 0x38
// 005da319  8bf1                 mov esi, ecx
// 005da31b  e800660c00           call 0x6a0920
// 005da320  83c404               add esp, 4
// 005da323  89442404             mov dword ptr [esp + 4], eax
// 005da327  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005da32f  85c0                 test eax, eax
// 005da331  741f                 je 0x5da352
// 005da333  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005da337  56                   push esi
// 005da338  51                   push ecx
// 005da339  8bc8                 mov ecx, eax
// 005da33b  e8e0feffff           call 0x5da220
// 005da340  5e                   pop esi
// 005da341  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005da345  64890d00000000       mov dword ptr fs:[0], ecx
// 005da34c  83c410               add esp, 0x10
// 005da34f  c20400               ret 4
// 005da352  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005da356  33c0                 xor eax, eax
// 005da358  5e                   pop esi
// 005da359  64890d00000000       mov dword ptr fs:[0], ecx
// 005da360  83c410               add esp, 0x10
// 005da363  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
