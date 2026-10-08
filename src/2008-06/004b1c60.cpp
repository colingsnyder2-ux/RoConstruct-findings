// roc 2008-06 004b1c60  unit: RBX::Network::VMarker::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b1c60
//
// 004b1c60  6aff                 push -1
// 004b1c62  68e89f7d00           push 0x7d9fe8
// 004b1c67  64a100000000         mov eax, dword ptr fs:[0]
// 004b1c6d  50                   push eax
// 004b1c6e  64892500000000       mov dword ptr fs:[0], esp
// 004b1c75  51                   push ecx
// 004b1c76  8b442414             mov eax, dword ptr [esp + 0x14]
// 004b1c7a  56                   push esi
// 004b1c7b  8bf1                 mov esi, ecx
// 004b1c7d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b1c81  89742404             mov dword ptr [esp + 4], esi
// 004b1c85  c706e0ec8000         mov dword ptr [esi], 0x80ece0
// 004b1c8b  894604               mov dword ptr [esi + 4], eax
// 004b1c8e  894e08               mov dword ptr [esi + 8], ecx
// 004b1c91  8d542418             lea edx, [esp + 0x18]
// 004b1c95  52                   push edx
// 004b1c96  8d44241c             lea eax, [esp + 0x1c]
// 004b1c9a  50                   push eax
// 004b1c9b  8d4e10               lea ecx, [esi + 0x10]
// 004b1c9e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004b1ca6  e8557ffeff           call 0x499c00
// 004b1cab  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b1caf  c7068c4b8200         mov dword ptr [esi], 0x824b8c
// 004b1cb5  8bc6                 mov eax, esi
// 004b1cb7  5e                   pop esi
// 004b1cb8  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1cbf  83c410               add esp, 0x10
// 004b1cc2  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
