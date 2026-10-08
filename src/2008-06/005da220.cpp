// roc 2008-06 005da220  unit: RBX::VHumanoid::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005da220
//
// 005da220  6aff                 push -1
// 005da222  68e89f7d00           push 0x7d9fe8
// 005da227  64a100000000         mov eax, dword ptr fs:[0]
// 005da22d  50                   push eax
// 005da22e  64892500000000       mov dword ptr fs:[0], esp
// 005da235  51                   push ecx
// 005da236  8b442414             mov eax, dword ptr [esp + 0x14]
// 005da23a  56                   push esi
// 005da23b  8bf1                 mov esi, ecx
// 005da23d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005da241  89742404             mov dword ptr [esp + 4], esi
// 005da245  c706e0ec8000         mov dword ptr [esi], 0x80ece0
// 005da24b  894604               mov dword ptr [esi + 4], eax
// 005da24e  894e08               mov dword ptr [esi + 8], ecx
// 005da251  8d542418             lea edx, [esp + 0x18]
// 005da255  52                   push edx
// 005da256  8d44241c             lea eax, [esp + 0x1c]
// 005da25a  50                   push eax
// 005da25b  8d4e10               lea ecx, [esi + 0x10]
// 005da25e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005da266  e895f9ebff           call 0x499c00
// 005da26b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005da26f  c706d4d58300         mov dword ptr [esi], 0x83d5d4
// 005da275  8bc6                 mov eax, esi
// 005da277  5e                   pop esi
// 005da278  64890d00000000       mov dword ptr fs:[0], ecx
// 005da27f  83c410               add esp, 0x10
// 005da282  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
