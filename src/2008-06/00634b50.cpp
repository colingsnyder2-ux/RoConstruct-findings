// roc 2008-06 00634b50  unit: RBX::VBrickColor::V?$Value::?$DescribedCreatable  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634b50
//
// 00634b50  6aff                 push -1
// 00634b52  68e89f7d00           push 0x7d9fe8
// 00634b57  64a100000000         mov eax, dword ptr fs:[0]
// 00634b5d  50                   push eax
// 00634b5e  64892500000000       mov dword ptr fs:[0], esp
// 00634b65  51                   push ecx
// 00634b66  8b442414             mov eax, dword ptr [esp + 0x14]
// 00634b6a  56                   push esi
// 00634b6b  8bf1                 mov esi, ecx
// 00634b6d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00634b71  89742404             mov dword ptr [esp + 4], esi
// 00634b75  c706e0ec8000         mov dword ptr [esi], 0x80ece0
// 00634b7b  894604               mov dword ptr [esi + 4], eax
// 00634b7e  894e08               mov dword ptr [esi + 8], ecx
// 00634b81  8d542418             lea edx, [esp + 0x18]
// 00634b85  52                   push edx
// 00634b86  8d44241c             lea eax, [esp + 0x1c]
// 00634b8a  50                   push eax
// 00634b8b  8d4e10               lea ecx, [esi + 0x10]
// 00634b8e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00634b96  e86550e6ff           call 0x499c00
// 00634b9b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00634b9f  c70608848400         mov dword ptr [esi], 0x848408
// 00634ba5  8bc6                 mov eax, esi
// 00634ba7  5e                   pop esi
// 00634ba8  64890d00000000       mov dword ptr fs:[0], ecx
// 00634baf  83c410               add esp, 0x10
// 00634bb2  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
