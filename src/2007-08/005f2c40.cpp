// roc 2007-08 005f2c40  unit: RBX::Reflection::Z::$$A6AXMM::?$TSignalDesc::TSignalInstance  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f2c40
//
// 005f2c40  6aff                 push -1
// 005f2c42  6878837500           push 0x758378
// 005f2c47  64a100000000         mov eax, dword ptr fs:[0]
// 005f2c4d  50                   push eax
// 005f2c4e  64892500000000       mov dword ptr fs:[0], esp
// 005f2c55  51                   push ecx
// 005f2c56  8b442414             mov eax, dword ptr [esp + 0x14]
// 005f2c5a  56                   push esi
// 005f2c5b  8bf1                 mov esi, ecx
// 005f2c5d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f2c61  89742404             mov dword ptr [esp + 4], esi
// 005f2c65  c706c4737800         mov dword ptr [esi], 0x7873c4
// 005f2c6b  894604               mov dword ptr [esi + 4], eax
// 005f2c6e  894e08               mov dword ptr [esi + 8], ecx
// 005f2c71  8d542418             lea edx, [esp + 0x18]
// 005f2c75  52                   push edx
// 005f2c76  8d44241c             lea eax, [esp + 0x1c]
// 005f2c7a  50                   push eax
// 005f2c7b  8d4e10               lea ecx, [esi + 0x10]
// 005f2c7e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005f2c86  e895eeffff           call 0x5f1b20
// 005f2c8b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f2c8f  c7064c087c00         mov dword ptr [esi], 0x7c084c
// 005f2c95  8bc6                 mov eax, esi
// 005f2c97  5e                   pop esi
// 005f2c98  64890d00000000       mov dword ptr fs:[0], ecx
// 005f2c9f  83c410               add esp, 0x10
// 005f2ca2  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
