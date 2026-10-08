// roc 2007-03 006031c0  unit: seg_00600000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006031c0
//
// 006031c0  6aff                 push -1
// 006031c2  68f8bc7500           push 0x75bcf8
// 006031c7  64a100000000         mov eax, dword ptr fs:[0]
// 006031cd  50                   push eax
// 006031ce  64892500000000       mov dword ptr fs:[0], esp
// 006031d5  51                   push ecx
// 006031d6  8b442414             mov eax, dword ptr [esp + 0x14]
// 006031da  56                   push esi
// 006031db  8bf1                 mov esi, ecx
// 006031dd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006031e1  89742404             mov dword ptr [esp + 4], esi
// 006031e5  c7067c647800         mov dword ptr [esi], 0x78647c
// 006031eb  894604               mov dword ptr [esi + 4], eax
// 006031ee  894e08               mov dword ptr [esi + 8], ecx
// 006031f1  8d542418             lea edx, [esp + 0x18]
// 006031f5  52                   push edx
// 006031f6  8d44241c             lea eax, [esp + 0x1c]
// 006031fa  50                   push eax
// 006031fb  8d4e10               lea ecx, [esi + 0x10]
// 006031fe  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00603206  e835cdfdff           call 0x5dff40
// 0060320b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060320f  c706f80b7c00         mov dword ptr [esi], 0x7c0bf8
// 00603215  8bc6                 mov eax, esi
// 00603217  5e                   pop esi
// 00603218  64890d00000000       mov dword ptr fs:[0], ecx
// 0060321f  83c410               add esp, 0x10
// 00603222  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
