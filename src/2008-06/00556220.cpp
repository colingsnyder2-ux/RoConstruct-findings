// roc 2008-06 00556220  unit: RBX::VRunService::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00556220
//
// 00556220  6aff                 push -1
// 00556222  68e89f7d00           push 0x7d9fe8
// 00556227  64a100000000         mov eax, dword ptr fs:[0]
// 0055622d  50                   push eax
// 0055622e  64892500000000       mov dword ptr fs:[0], esp
// 00556235  51                   push ecx
// 00556236  8b442414             mov eax, dword ptr [esp + 0x14]
// 0055623a  56                   push esi
// 0055623b  8bf1                 mov esi, ecx
// 0055623d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00556241  89742404             mov dword ptr [esp + 4], esi
// 00556245  c706e0ec8000         mov dword ptr [esi], 0x80ece0
// 0055624b  894604               mov dword ptr [esi + 4], eax
// 0055624e  894e08               mov dword ptr [esi + 8], ecx
// 00556251  8d542418             lea edx, [esp + 0x18]
// 00556255  52                   push edx
// 00556256  8d44241c             lea eax, [esp + 0x1c]
// 0055625a  50                   push eax
// 0055625b  8d4e10               lea ecx, [esi + 0x10]
// 0055625e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00556266  e89539f4ff           call 0x499c00
// 0055626b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055626f  c70618d58200         mov dword ptr [esi], 0x82d518
// 00556275  8bc6                 mov eax, esi
// 00556277  5e                   pop esi
// 00556278  64890d00000000       mov dword ptr fs:[0], ecx
// 0055627f  83c410               add esp, 0x10
// 00556282  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
