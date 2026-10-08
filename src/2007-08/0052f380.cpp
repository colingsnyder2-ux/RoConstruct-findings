// roc 2007-08 0052f380  unit: RBX::VRunService::?$FactoryProduct  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052f380
//
// 0052f380  6aff                 push -1
// 0052f382  6888587500           push 0x755888
// 0052f387  64a100000000         mov eax, dword ptr fs:[0]
// 0052f38d  50                   push eax
// 0052f38e  64892500000000       mov dword ptr fs:[0], esp
// 0052f395  51                   push ecx
// 0052f396  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052f39a  56                   push esi
// 0052f39b  8bf1                 mov esi, ecx
// 0052f39d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052f3a1  50                   push eax
// 0052f3a2  51                   push ecx
// 0052f3a3  8974240c             mov dword ptr [esp + 0xc], esi
// 0052f3a7  e874f8ffff           call 0x52ec20
// 0052f3ac  50                   push eax
// 0052f3ad  8bce                 mov ecx, esi
// 0052f3af  e8fc190400           call 0x570db0
// 0052f3b4  8b542418             mov edx, dword ptr [esp + 0x18]
// 0052f3b8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052f3bc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0052f3c4  c7062c4c7a00         mov dword ptr [esi], 0x7a4c2c
// 0052f3ca  895628               mov dword ptr [esi + 0x28], edx
// 0052f3cd  89462c               mov dword ptr [esi + 0x2c], eax
// 0052f3d0  e87bdf0300           call 0x56d350
// 0052f3d5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052f3d9  894614               mov dword ptr [esi + 0x14], eax
// 0052f3dc  8bc6                 mov eax, esi
// 0052f3de  5e                   pop esi
// 0052f3df  64890d00000000       mov dword ptr fs:[0], ecx
// 0052f3e6  83c410               add esp, 0x10
// 0052f3e9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
