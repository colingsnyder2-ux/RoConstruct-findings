// roc 2007-03 005e0f70  unit: seg_005e0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e0f70
//
// 005e0f70  6aff                 push -1
// 005e0f72  68f8bc7500           push 0x75bcf8
// 005e0f77  64a100000000         mov eax, dword ptr fs:[0]
// 005e0f7d  50                   push eax
// 005e0f7e  64892500000000       mov dword ptr fs:[0], esp
// 005e0f85  51                   push ecx
// 005e0f86  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e0f8a  56                   push esi
// 005e0f8b  8bf1                 mov esi, ecx
// 005e0f8d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e0f91  89742404             mov dword ptr [esp + 4], esi
// 005e0f95  c7067c647800         mov dword ptr [esi], 0x78647c
// 005e0f9b  894604               mov dword ptr [esi + 4], eax
// 005e0f9e  894e08               mov dword ptr [esi + 8], ecx
// 005e0fa1  8d542418             lea edx, [esp + 0x18]
// 005e0fa5  52                   push edx
// 005e0fa6  8d44241c             lea eax, [esp + 0x1c]
// 005e0faa  50                   push eax
// 005e0fab  8d4e10               lea ecx, [esi + 0x10]
// 005e0fae  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005e0fb6  e885efffff           call 0x5dff40
// 005e0fbb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e0fbf  c70630e57b00         mov dword ptr [esi], 0x7be530
// 005e0fc5  8bc6                 mov eax, esi
// 005e0fc7  5e                   pop esi
// 005e0fc8  64890d00000000       mov dword ptr fs:[0], ecx
// 005e0fcf  83c410               add esp, 0x10
// 005e0fd2  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
