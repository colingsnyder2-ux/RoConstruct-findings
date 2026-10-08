// roc 2007-08 00541020  unit: RBX::VInstance::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00541020
//
// 00541020  6aff                 push -1
// 00541022  6888587500           push 0x755888
// 00541027  64a100000000         mov eax, dword ptr fs:[0]
// 0054102d  50                   push eax
// 0054102e  64892500000000       mov dword ptr fs:[0], esp
// 00541035  51                   push ecx
// 00541036  8b442420             mov eax, dword ptr [esp + 0x20]
// 0054103a  56                   push esi
// 0054103b  8bf1                 mov esi, ecx
// 0054103d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00541041  50                   push eax
// 00541042  51                   push ecx
// 00541043  8974240c             mov dword ptr [esp + 0xc], esi
// 00541047  e84476edff           call 0x418690
// 0054104c  50                   push eax
// 0054104d  8bce                 mov ecx, esi
// 0054104f  e85cfd0200           call 0x570db0
// 00541054  8b542418             mov edx, dword ptr [esp + 0x18]
// 00541058  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054105c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00541064  c70680667a00         mov dword ptr [esi], 0x7a6680
// 0054106a  895628               mov dword ptr [esi + 0x28], edx
// 0054106d  89462c               mov dword ptr [esi + 0x2c], eax
// 00541070  e87bc60200           call 0x56d6f0
// 00541075  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00541079  894614               mov dword ptr [esi + 0x14], eax
// 0054107c  8bc6                 mov eax, esi
// 0054107e  5e                   pop esi
// 0054107f  64890d00000000       mov dword ptr fs:[0], ecx
// 00541086  83c410               add esp, 0x10
// 00541089  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
