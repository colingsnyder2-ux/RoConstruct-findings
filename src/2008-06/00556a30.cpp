// roc 2008-06 00556a30  unit: RBX::VRunService::?$FactoryProduct  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00556a30
//
// 00556a30  6aff                 push -1
// 00556a32  68082d7d00           push 0x7d2d08
// 00556a37  64a100000000         mov eax, dword ptr fs:[0]
// 00556a3d  50                   push eax
// 00556a3e  64892500000000       mov dword ptr fs:[0], esp
// 00556a45  51                   push ecx
// 00556a46  8b442420             mov eax, dword ptr [esp + 0x20]
// 00556a4a  56                   push esi
// 00556a4b  8bf1                 mov esi, ecx
// 00556a4d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00556a51  50                   push eax
// 00556a52  51                   push ecx
// 00556a53  8974240c             mov dword ptr [esp + 0xc], esi
// 00556a57  e8d4f9ffff           call 0x556430
// 00556a5c  50                   push eax
// 00556a5d  8bce                 mov ecx, esi
// 00556a5f  e82ced0300           call 0x595790
// 00556a64  8b542418             mov edx, dword ptr [esp + 0x18]
// 00556a68  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00556a6c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00556a74  c70618d68200         mov dword ptr [esi], 0x82d618
// 00556a7a  895638               mov dword ptr [esi + 0x38], edx
// 00556a7d  89463c               mov dword ptr [esi + 0x3c], eax
// 00556a80  e8cbdf0300           call 0x594a50
// 00556a85  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00556a89  894614               mov dword ptr [esi + 0x14], eax
// 00556a8c  8bc6                 mov eax, esi
// 00556a8e  5e                   pop esi
// 00556a8f  64890d00000000       mov dword ptr fs:[0], ecx
// 00556a96  83c410               add esp, 0x10
// 00556a99  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
