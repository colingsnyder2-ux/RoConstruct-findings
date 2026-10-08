// roc 2007-08 0055c500  unit: RBX::VDataModel::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055c500
//
// 0055c500  6aff                 push -1
// 0055c502  6888587500           push 0x755888
// 0055c507  64a100000000         mov eax, dword ptr fs:[0]
// 0055c50d  50                   push eax
// 0055c50e  64892500000000       mov dword ptr fs:[0], esp
// 0055c515  51                   push ecx
// 0055c516  8b442420             mov eax, dword ptr [esp + 0x20]
// 0055c51a  56                   push esi
// 0055c51b  8bf1                 mov esi, ecx
// 0055c51d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055c521  50                   push eax
// 0055c522  51                   push ecx
// 0055c523  8974240c             mov dword ptr [esp + 0xc], esi
// 0055c527  e814e8ffff           call 0x55ad40
// 0055c52c  50                   push eax
// 0055c52d  8bce                 mov ecx, esi
// 0055c52f  e87c480100           call 0x570db0
// 0055c534  8b542418             mov edx, dword ptr [esp + 0x18]
// 0055c538  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0055c53c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055c544  c706d88a7a00         mov dword ptr [esi], 0x7a8ad8
// 0055c54a  895628               mov dword ptr [esi + 0x28], edx
// 0055c54d  89462c               mov dword ptr [esi + 0x2c], eax
// 0055c550  e8fb0d0100           call 0x56d350
// 0055c555  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055c559  894614               mov dword ptr [esi + 0x14], eax
// 0055c55c  8bc6                 mov eax, esi
// 0055c55e  5e                   pop esi
// 0055c55f  64890d00000000       mov dword ptr fs:[0], ecx
// 0055c566  83c410               add esp, 0x10
// 0055c569  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
