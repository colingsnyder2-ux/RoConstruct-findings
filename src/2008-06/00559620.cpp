// roc 2008-06 00559620  unit: RBX::VInstance::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00559620
//
// 00559620  6aff                 push -1
// 00559622  68e89f7d00           push 0x7d9fe8
// 00559627  64a100000000         mov eax, dword ptr fs:[0]
// 0055962d  50                   push eax
// 0055962e  64892500000000       mov dword ptr fs:[0], esp
// 00559635  51                   push ecx
// 00559636  8b442414             mov eax, dword ptr [esp + 0x14]
// 0055963a  56                   push esi
// 0055963b  8bf1                 mov esi, ecx
// 0055963d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00559641  89742404             mov dword ptr [esp + 4], esi
// 00559645  c706e0ec8000         mov dword ptr [esi], 0x80ece0
// 0055964b  894604               mov dword ptr [esi + 4], eax
// 0055964e  894e08               mov dword ptr [esi + 8], ecx
// 00559651  8d542418             lea edx, [esp + 0x18]
// 00559655  52                   push edx
// 00559656  8d44241c             lea eax, [esp + 0x1c]
// 0055965a  50                   push eax
// 0055965b  8d4e10               lea ecx, [esi + 0x10]
// 0055965e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00559666  e89505f4ff           call 0x499c00
// 0055966b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055966f  c70624d78200         mov dword ptr [esi], 0x82d724
// 00559675  8bc6                 mov eax, esi
// 00559677  5e                   pop esi
// 00559678  64890d00000000       mov dword ptr fs:[0], ecx
// 0055967f  83c410               add esp, 0x10
// 00559682  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@QAE@PAVSignalSource@23@ABVSignalDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
