// roc 2008-06 004b20e0  unit: RBX::Network::VPeer::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b20e0
//
// 004b20e0  6aff                 push -1
// 004b20e2  68e89f7d00           push 0x7d9fe8
// 004b20e7  64a100000000         mov eax, dword ptr fs:[0]
// 004b20ed  50                   push eax
// 004b20ee  64892500000000       mov dword ptr fs:[0], esp
// 004b20f5  51                   push ecx
// 004b20f6  8b442414             mov eax, dword ptr [esp + 0x14]
// 004b20fa  56                   push esi
// 004b20fb  8bf1                 mov esi, ecx
// 004b20fd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b2101  89742404             mov dword ptr [esp + 4], esi
// 004b2105  c706e0ec8000         mov dword ptr [esi], 0x80ece0
// 004b210b  894604               mov dword ptr [esi + 4], eax
// 004b210e  894e08               mov dword ptr [esi + 8], ecx
// 004b2111  8d542418             lea edx, [esp + 0x18]
// 004b2115  52                   push edx
// 004b2116  8d44241c             lea eax, [esp + 0x1c]
// 004b211a  50                   push eax
// 004b211b  8d4e10               lea ecx, [esi + 0x10]
// 004b211e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004b2126  e8d57afeff           call 0x499c00
// 004b212b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b212f  c706a44b8200         mov dword ptr [esi], 0x824ba4
// 004b2135  8bc6                 mov eax, esi
// 004b2137  5e                   pop esi
// 004b2138  64890d00000000       mov dword ptr fs:[0], ecx
// 004b213f  83c410               add esp, 0x10
// 004b2142  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
