// roc 2008-06 0048e340  unit: RBX::Network::VPlayer::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e340
//
// 0048e340  6aff                 push -1
// 0048e342  68e89f7d00           push 0x7d9fe8
// 0048e347  64a100000000         mov eax, dword ptr fs:[0]
// 0048e34d  50                   push eax
// 0048e34e  64892500000000       mov dword ptr fs:[0], esp
// 0048e355  51                   push ecx
// 0048e356  8b442414             mov eax, dword ptr [esp + 0x14]
// 0048e35a  56                   push esi
// 0048e35b  8bf1                 mov esi, ecx
// 0048e35d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048e361  89742404             mov dword ptr [esp + 4], esi
// 0048e365  c706e0ec8000         mov dword ptr [esi], 0x80ece0
// 0048e36b  894604               mov dword ptr [esi + 4], eax
// 0048e36e  894e08               mov dword ptr [esi + 8], ecx
// 0048e371  8d542418             lea edx, [esp + 0x18]
// 0048e375  52                   push edx
// 0048e376  8d44241c             lea eax, [esp + 0x1c]
// 0048e37a  50                   push eax
// 0048e37b  8d4e10               lea ecx, [esi + 0x10]
// 0048e37e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0048e386  e875b80000           call 0x499c00
// 0048e38b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048e38f  c70650178200         mov dword ptr [esi], 0x821750
// 0048e395  8bc6                 mov eax, esi
// 0048e397  5e                   pop esi
// 0048e398  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e39f  83c410               add esp, 0x10
// 0048e3a2  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
