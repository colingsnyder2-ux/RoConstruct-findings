// roc 2008-06 005e1690  unit: RBX::VLighting::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e1690
//
// 005e1690  6aff                 push -1
// 005e1692  68082d7d00           push 0x7d2d08
// 005e1697  64a100000000         mov eax, dword ptr fs:[0]
// 005e169d  50                   push eax
// 005e169e  64892500000000       mov dword ptr fs:[0], esp
// 005e16a5  51                   push ecx
// 005e16a6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005e16aa  56                   push esi
// 005e16ab  8bf1                 mov esi, ecx
// 005e16ad  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e16b1  50                   push eax
// 005e16b2  51                   push ecx
// 005e16b3  8974240c             mov dword ptr [esp + 0xc], esi
// 005e16b7  e844faffff           call 0x5e1100
// 005e16bc  50                   push eax
// 005e16bd  8bce                 mov ecx, esi
// 005e16bf  e8cc40fbff           call 0x595790
// 005e16c4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e16c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e16cc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e16d4  c7060cde8300         mov dword ptr [esi], 0x83de0c
// 005e16da  895638               mov dword ptr [esi + 0x38], edx
// 005e16dd  89463c               mov dword ptr [esi + 0x3c], eax
// 005e16e0  e87bb7f8ff           call 0x56ce60
// 005e16e5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e16e9  894614               mov dword ptr [esi + 0x14], eax
// 005e16ec  8bc6                 mov eax, esi
// 005e16ee  5e                   pop esi
// 005e16ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005e16f6  83c410               add esp, 0x10
// 005e16f9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
