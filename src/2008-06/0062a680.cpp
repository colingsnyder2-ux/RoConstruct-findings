// roc 2008-06 0062a680  unit: RBX::VExplosion::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062a680
//
// 0062a680  6aff                 push -1
// 0062a682  68e89f7d00           push 0x7d9fe8
// 0062a687  64a100000000         mov eax, dword ptr fs:[0]
// 0062a68d  50                   push eax
// 0062a68e  64892500000000       mov dword ptr fs:[0], esp
// 0062a695  51                   push ecx
// 0062a696  8b442414             mov eax, dword ptr [esp + 0x14]
// 0062a69a  56                   push esi
// 0062a69b  8bf1                 mov esi, ecx
// 0062a69d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0062a6a1  89742404             mov dword ptr [esp + 4], esi
// 0062a6a5  c706e0ec8000         mov dword ptr [esi], 0x80ece0
// 0062a6ab  894604               mov dword ptr [esi + 4], eax
// 0062a6ae  894e08               mov dword ptr [esi + 8], ecx
// 0062a6b1  8d542418             lea edx, [esp + 0x18]
// 0062a6b5  52                   push edx
// 0062a6b6  8d44241c             lea eax, [esp + 0x1c]
// 0062a6ba  50                   push eax
// 0062a6bb  8d4e10               lea ecx, [esi + 0x10]
// 0062a6be  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0062a6c6  e835f5e6ff           call 0x499c00
// 0062a6cb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062a6cf  c706a85c8400         mov dword ptr [esi], 0x845ca8
// 0062a6d5  8bc6                 mov eax, esi
// 0062a6d7  5e                   pop esi
// 0062a6d8  64890d00000000       mov dword ptr fs:[0], ecx
// 0062a6df  83c410               add esp, 0x10
// 0062a6e2  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
