// roc 2008-06 005d6610  unit: RBX::VTeams::?$FactoryProduct  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d6610
//
// 005d6610  6aff                 push -1
// 005d6612  68082d7d00           push 0x7d2d08
// 005d6617  64a100000000         mov eax, dword ptr fs:[0]
// 005d661d  50                   push eax
// 005d661e  64892500000000       mov dword ptr fs:[0], esp
// 005d6625  51                   push ecx
// 005d6626  8b442420             mov eax, dword ptr [esp + 0x20]
// 005d662a  56                   push esi
// 005d662b  8bf1                 mov esi, ecx
// 005d662d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d6631  50                   push eax
// 005d6632  51                   push ecx
// 005d6633  8974240c             mov dword ptr [esp + 0xc], esi
// 005d6637  e8c4f9ffff           call 0x5d6000
// 005d663c  50                   push eax
// 005d663d  8bce                 mov ecx, esi
// 005d663f  e84cf1fbff           call 0x595790
// 005d6644  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d6648  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005d664c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d6654  c70658cf8300         mov dword ptr [esi], 0x83cf58
// 005d665a  895638               mov dword ptr [esi + 0x38], edx
// 005d665d  89463c               mov dword ptr [esi + 0x3c], eax
// 005d6660  e8ebe3fbff           call 0x594a50
// 005d6665  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d6669  894614               mov dword ptr [esi + 0x14], eax
// 005d666c  8bc6                 mov eax, esi
// 005d666e  5e                   pop esi
// 005d666f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d6676  83c410               add esp, 0x10
// 005d6679  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
