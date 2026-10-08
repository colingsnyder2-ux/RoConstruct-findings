// roc 2008-06 005e1560  unit: RBX::VLighting::?$FactoryProduct  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e1560
//
// 005e1560  6aff                 push -1
// 005e1562  68082d7d00           push 0x7d2d08
// 005e1567  64a100000000         mov eax, dword ptr fs:[0]
// 005e156d  50                   push eax
// 005e156e  64892500000000       mov dword ptr fs:[0], esp
// 005e1575  51                   push ecx
// 005e1576  8b442420             mov eax, dword ptr [esp + 0x20]
// 005e157a  56                   push esi
// 005e157b  8bf1                 mov esi, ecx
// 005e157d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e1581  50                   push eax
// 005e1582  51                   push ecx
// 005e1583  8974240c             mov dword ptr [esp + 0xc], esi
// 005e1587  e874fbffff           call 0x5e1100
// 005e158c  50                   push eax
// 005e158d  8bce                 mov ecx, esi
// 005e158f  e8fc41fbff           call 0x595790
// 005e1594  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e1598  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e159c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e15a4  c70600de8300         mov dword ptr [esi], 0x83de00
// 005e15aa  895638               mov dword ptr [esi + 0x38], edx
// 005e15ad  89463c               mov dword ptr [esi + 0x3c], eax
// 005e15b0  e8ebb6f8ff           call 0x56cca0
// 005e15b5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e15b9  894614               mov dword ptr [esi + 0x14], eax
// 005e15bc  8bc6                 mov eax, esi
// 005e15be  5e                   pop esi
// 005e15bf  64890d00000000       mov dword ptr fs:[0], ecx
// 005e15c6  83c410               add esp, 0x10
// 005e15c9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
