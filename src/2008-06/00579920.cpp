// roc 2008-06 00579920  unit: RBX::VDataModel::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00579920
//
// 00579920  6aff                 push -1
// 00579922  68082d7d00           push 0x7d2d08
// 00579927  64a100000000         mov eax, dword ptr fs:[0]
// 0057992d  50                   push eax
// 0057992e  64892500000000       mov dword ptr fs:[0], esp
// 00579935  51                   push ecx
// 00579936  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057993a  56                   push esi
// 0057993b  8bf1                 mov esi, ecx
// 0057993d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00579941  50                   push eax
// 00579942  51                   push ecx
// 00579943  8974240c             mov dword ptr [esp + 0xc], esi
// 00579947  e874efffff           call 0x5788c0
// 0057994c  50                   push eax
// 0057994d  8bce                 mov ecx, esi
// 0057994f  e83cbe0100           call 0x595790
// 00579954  8b542418             mov edx, dword ptr [esp + 0x18]
// 00579958  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057995c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00579964  c7068c008300         mov dword ptr [esi], 0x83008c
// 0057996a  895638               mov dword ptr [esi + 0x38], edx
// 0057996d  89463c               mov dword ptr [esi + 0x3c], eax
// 00579970  e8dbb00100           call 0x594a50
// 00579975  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00579979  894614               mov dword ptr [esi + 0x14], eax
// 0057997c  8bc6                 mov eax, esi
// 0057997e  5e                   pop esi
// 0057997f  64890d00000000       mov dword ptr fs:[0], ecx
// 00579986  83c410               add esp, 0x10
// 00579989  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
