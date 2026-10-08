// roc 2007-03 00531ec0  unit: seg_00530000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00531ec0
//
// 00531ec0  6aff                 push -1
// 00531ec2  68f8bc7500           push 0x75bcf8
// 00531ec7  64a100000000         mov eax, dword ptr fs:[0]
// 00531ecd  50                   push eax
// 00531ece  64892500000000       mov dword ptr fs:[0], esp
// 00531ed5  51                   push ecx
// 00531ed6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00531eda  56                   push esi
// 00531edb  8bf1                 mov esi, ecx
// 00531edd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00531ee1  89742404             mov dword ptr [esp + 4], esi
// 00531ee5  c7067c647800         mov dword ptr [esi], 0x78647c
// 00531eeb  894604               mov dword ptr [esi + 4], eax
// 00531eee  894e08               mov dword ptr [esi + 8], ecx
// 00531ef1  8d542418             lea edx, [esp + 0x18]
// 00531ef5  52                   push edx
// 00531ef6  8d44241c             lea eax, [esp + 0x1c]
// 00531efa  50                   push eax
// 00531efb  8d4e10               lea ecx, [esi + 0x10]
// 00531efe  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00531f06  e835e00a00           call 0x5dff40
// 00531f0b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00531f0f  c706384e7a00         mov dword ptr [esi], 0x7a4e38
// 00531f15  8bc6                 mov eax, esi
// 00531f17  5e                   pop esi
// 00531f18  64890d00000000       mov dword ptr fs:[0], ecx
// 00531f1f  83c410               add esp, 0x10
// 00531f22  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
