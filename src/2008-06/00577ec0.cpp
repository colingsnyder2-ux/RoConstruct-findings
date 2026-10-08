// roc 2008-06 00577ec0  unit: RBX::VDataModel::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577ec0
//
// 00577ec0  6aff                 push -1
// 00577ec2  68e89f7d00           push 0x7d9fe8
// 00577ec7  64a100000000         mov eax, dword ptr fs:[0]
// 00577ecd  50                   push eax
// 00577ece  64892500000000       mov dword ptr fs:[0], esp
// 00577ed5  51                   push ecx
// 00577ed6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00577eda  56                   push esi
// 00577edb  8bf1                 mov esi, ecx
// 00577edd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00577ee1  89742404             mov dword ptr [esp + 4], esi
// 00577ee5  c706e0ec8000         mov dword ptr [esi], 0x80ece0
// 00577eeb  894604               mov dword ptr [esi + 4], eax
// 00577eee  894e08               mov dword ptr [esi + 8], ecx
// 00577ef1  8d542418             lea edx, [esp + 0x18]
// 00577ef5  52                   push edx
// 00577ef6  8d44241c             lea eax, [esp + 0x1c]
// 00577efa  50                   push eax
// 00577efb  8d4e10               lea ecx, [esi + 0x10]
// 00577efe  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00577f06  e8f51cf2ff           call 0x499c00
// 00577f0b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577f0f  c706f4ff8200         mov dword ptr [esi], 0x82fff4
// 00577f15  8bc6                 mov eax, esi
// 00577f17  5e                   pop esi
// 00577f18  64890d00000000       mov dword ptr fs:[0], ecx
// 00577f1f  83c410               add esp, 0x10
// 00577f22  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
