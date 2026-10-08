// roc 2007-08 005a6f70  unit: RBX::Humanoid  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a6f70
//
// 005a6f70  6aff                 push -1
// 005a6f72  6878837500           push 0x758378
// 005a6f77  64a100000000         mov eax, dword ptr fs:[0]
// 005a6f7d  50                   push eax
// 005a6f7e  64892500000000       mov dword ptr fs:[0], esp
// 005a6f85  51                   push ecx
// 005a6f86  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a6f8a  56                   push esi
// 005a6f8b  8bf1                 mov esi, ecx
// 005a6f8d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a6f91  89742404             mov dword ptr [esp + 4], esi
// 005a6f95  c706c4737800         mov dword ptr [esi], 0x7873c4
// 005a6f9b  894604               mov dword ptr [esi + 4], eax
// 005a6f9e  894e08               mov dword ptr [esi + 8], ecx
// 005a6fa1  8d542418             lea edx, [esp + 0x18]
// 005a6fa5  52                   push edx
// 005a6fa6  8d44241c             lea eax, [esp + 0x1c]
// 005a6faa  50                   push eax
// 005a6fab  8d4e10               lea ecx, [esi + 0x10]
// 005a6fae  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005a6fb6  e865ab0400           call 0x5f1b20
// 005a6fbb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a6fbf  c70628557b00         mov dword ptr [esi], 0x7b5528
// 005a6fc5  8bc6                 mov eax, esi
// 005a6fc7  5e                   pop esi
// 005a6fc8  64890d00000000       mov dword ptr fs:[0], ecx
// 005a6fcf  83c410               add esp, 0x10
// 005a6fd2  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
