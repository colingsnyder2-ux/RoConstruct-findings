// roc 2007-08 00592b30  unit: RBX::VVisit::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00592b30
//
// 00592b30  6aff                 push -1
// 00592b32  6888587500           push 0x755888
// 00592b37  64a100000000         mov eax, dword ptr fs:[0]
// 00592b3d  50                   push eax
// 00592b3e  64892500000000       mov dword ptr fs:[0], esp
// 00592b45  51                   push ecx
// 00592b46  8b442420             mov eax, dword ptr [esp + 0x20]
// 00592b4a  56                   push esi
// 00592b4b  8bf1                 mov esi, ecx
// 00592b4d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00592b51  50                   push eax
// 00592b52  51                   push ecx
// 00592b53  8974240c             mov dword ptr [esp + 0xc], esi
// 00592b57  e834b8ffff           call 0x58e390
// 00592b5c  50                   push eax
// 00592b5d  8bce                 mov ecx, esi
// 00592b5f  e84ce2fdff           call 0x570db0
// 00592b64  8b542418             mov edx, dword ptr [esp + 0x18]
// 00592b68  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00592b6c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00592b74  c70660027b00         mov dword ptr [esi], 0x7b0260
// 00592b7a  895628               mov dword ptr [esi + 0x28], edx
// 00592b7d  89462c               mov dword ptr [esi + 0x2c], eax
// 00592b80  e87baefdff           call 0x56da00
// 00592b85  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00592b89  894614               mov dword ptr [esi + 0x14], eax
// 00592b8c  8bc6                 mov eax, esi
// 00592b8e  5e                   pop esi
// 00592b8f  64890d00000000       mov dword ptr fs:[0], ecx
// 00592b96  83c410               add esp, 0x10
// 00592b99  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
