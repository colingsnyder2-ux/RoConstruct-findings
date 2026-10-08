// roc 2007-08 0057ef80  unit: RBX::VModelInstance::?$BoundFuncDesc  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057ef80
//
// 0057ef80  6aff                 push -1
// 0057ef82  6888587500           push 0x755888
// 0057ef87  64a100000000         mov eax, dword ptr fs:[0]
// 0057ef8d  50                   push eax
// 0057ef8e  64892500000000       mov dword ptr fs:[0], esp
// 0057ef95  51                   push ecx
// 0057ef96  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057ef9a  56                   push esi
// 0057ef9b  8bf1                 mov esi, ecx
// 0057ef9d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057efa1  50                   push eax
// 0057efa2  51                   push ecx
// 0057efa3  8974240c             mov dword ptr [esp + 0xc], esi
// 0057efa7  e874efffff           call 0x57df20
// 0057efac  50                   push eax
// 0057efad  8bce                 mov ecx, esi
// 0057efaf  e8fc1dffff           call 0x570db0
// 0057efb4  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057efb8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057efbc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057efc0  895628               mov dword ptr [esi + 0x28], edx
// 0057efc3  89462c               mov dword ptr [esi + 0x2c], eax
// 0057efc6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057efce  c70618bd7a00         mov dword ptr [esi], 0x7abd18
// 0057efd4  894e30               mov dword ptr [esi + 0x30], ecx
// 0057efd7  e874e3feff           call 0x56d350
// 0057efdc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057efe0  894614               mov dword ptr [esi + 0x14], eax
// 0057efe3  8bc6                 mov eax, esi
// 0057efe5  5e                   pop esi
// 0057efe6  64890d00000000       mov dword ptr fs:[0], ecx
// 0057efed  83c410               add esp, 0x10
// 0057eff0  c21400               ret 0x14
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8ModelInstance@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
