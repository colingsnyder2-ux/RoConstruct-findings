// roc 2008-06 00499cf0  unit: RBX::Network::VPlayers::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00499cf0
//
// 00499cf0  6aff                 push -1
// 00499cf2  68e89f7d00           push 0x7d9fe8
// 00499cf7  64a100000000         mov eax, dword ptr fs:[0]
// 00499cfd  50                   push eax
// 00499cfe  64892500000000       mov dword ptr fs:[0], esp
// 00499d05  51                   push ecx
// 00499d06  8b442414             mov eax, dword ptr [esp + 0x14]
// 00499d0a  56                   push esi
// 00499d0b  8bf1                 mov esi, ecx
// 00499d0d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00499d11  89742404             mov dword ptr [esp + 4], esi
// 00499d15  c706e0ec8000         mov dword ptr [esi], 0x80ece0
// 00499d1b  894604               mov dword ptr [esi + 4], eax
// 00499d1e  894e08               mov dword ptr [esi + 8], ecx
// 00499d21  8d542418             lea edx, [esp + 0x18]
// 00499d25  52                   push edx
// 00499d26  8d44241c             lea eax, [esp + 0x1c]
// 00499d2a  50                   push eax
// 00499d2b  8d4e10               lea ecx, [esi + 0x10]
// 00499d2e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00499d36  e8c5feffff           call 0x499c00
// 00499d3b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00499d3f  c70610288200         mov dword ptr [esi], 0x822810
// 00499d45  8bc6                 mov eax, esi
// 00499d47  5e                   pop esi
// 00499d48  64890d00000000       mov dword ptr fs:[0], ecx
// 00499d4f  83c410               add esp, 0x10
// 00499d52  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
