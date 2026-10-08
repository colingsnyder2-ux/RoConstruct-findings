// roc 2008-06 00492c60  unit: RBX::Network::VPlayer::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00492c60
//
// 00492c60  6aff                 push -1
// 00492c62  68082d7d00           push 0x7d2d08
// 00492c67  64a100000000         mov eax, dword ptr fs:[0]
// 00492c6d  50                   push eax
// 00492c6e  64892500000000       mov dword ptr fs:[0], esp
// 00492c75  51                   push ecx
// 00492c76  8b442420             mov eax, dword ptr [esp + 0x20]
// 00492c7a  56                   push esi
// 00492c7b  8bf1                 mov esi, ecx
// 00492c7d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00492c81  50                   push eax
// 00492c82  51                   push ecx
// 00492c83  8974240c             mov dword ptr [esp + 0xc], esi
// 00492c87  e8d4e6ffff           call 0x491360
// 00492c8c  50                   push eax
// 00492c8d  8bce                 mov ecx, esi
// 00492c8f  e8fc2a1000           call 0x595790
// 00492c94  8b542418             mov edx, dword ptr [esp + 0x18]
// 00492c98  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00492c9c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00492ca4  c706cc1d8200         mov dword ptr [esi], 0x821dcc
// 00492caa  895638               mov dword ptr [esi + 0x38], edx
// 00492cad  89463c               mov dword ptr [esi + 0x3c], eax
// 00492cb0  e89b1d1000           call 0x594a50
// 00492cb5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00492cb9  894614               mov dword ptr [esi + 0x14], eax
// 00492cbc  8bc6                 mov eax, esi
// 00492cbe  5e                   pop esi
// 00492cbf  64890d00000000       mov dword ptr fs:[0], ecx
// 00492cc6  83c410               add esp, 0x10
// 00492cc9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
