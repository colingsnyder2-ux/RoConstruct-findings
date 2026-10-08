// roc 2009-06 00694040  unit: RBX::BodyMover  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00694040
//
// 00694040  6aff                 push -1
// 00694042  68f8a28500           push 0x85a2f8
// 00694047  64a100000000         mov eax, dword ptr fs:[0]
// 0069404d  50                   push eax
// 0069404e  64892500000000       mov dword ptr fs:[0], esp
// 00694055  51                   push ecx
// 00694056  56                   push esi
// 00694057  8bf1                 mov esi, ecx
// 00694059  89742404             mov dword ptr [esp + 4], esi
// 0069405d  8d4e18               lea ecx, [esi + 0x18]
// 00694060  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00694068  e8e349e2ff           call 0x4b8a50
// 0069406d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00694071  c70630d28a00         mov dword ptr [esi], 0x8ad230
// 00694077  5e                   pop esi
// 00694078  64890d00000000       mov dword ptr fs:[0], ecx
// 0069407f  83c410               add esp, 0x10
// 00694082  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??1SignalDescriptor@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
