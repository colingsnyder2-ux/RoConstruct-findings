// roc 2007-03 00531e50  unit: seg_00530000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00531e50
//
// 00531e50  6aff                 push -1
// 00531e52  68f8bc7500           push 0x75bcf8
// 00531e57  64a100000000         mov eax, dword ptr fs:[0]
// 00531e5d  50                   push eax
// 00531e5e  64892500000000       mov dword ptr fs:[0], esp
// 00531e65  51                   push ecx
// 00531e66  8b442414             mov eax, dword ptr [esp + 0x14]
// 00531e6a  56                   push esi
// 00531e6b  8bf1                 mov esi, ecx
// 00531e6d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00531e71  89742404             mov dword ptr [esp + 4], esi
// 00531e75  c7067c647800         mov dword ptr [esi], 0x78647c
// 00531e7b  894604               mov dword ptr [esi + 4], eax
// 00531e7e  894e08               mov dword ptr [esi + 8], ecx
// 00531e81  8d542418             lea edx, [esp + 0x18]
// 00531e85  52                   push edx
// 00531e86  8d44241c             lea eax, [esp + 0x1c]
// 00531e8a  50                   push eax
// 00531e8b  8d4e10               lea ecx, [esi + 0x10]
// 00531e8e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00531e96  e8a5e00a00           call 0x5dff40
// 00531e9b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00531e9f  c706304e7a00         mov dword ptr [esi], 0x7a4e30
// 00531ea5  8bc6                 mov eax, esi
// 00531ea7  5e                   pop esi
// 00531ea8  64890d00000000       mov dword ptr fs:[0], ecx
// 00531eaf  83c410               add esp, 0x10
// 00531eb2  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
