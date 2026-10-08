// roc 2008-06 0058b0f0  unit: RBX::VChangeHistoryService::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058b0f0
//
// 0058b0f0  6aff                 push -1
// 0058b0f2  68082d7d00           push 0x7d2d08
// 0058b0f7  64a100000000         mov eax, dword ptr fs:[0]
// 0058b0fd  50                   push eax
// 0058b0fe  64892500000000       mov dword ptr fs:[0], esp
// 0058b105  51                   push ecx
// 0058b106  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058b10a  56                   push esi
// 0058b10b  8bf1                 mov esi, ecx
// 0058b10d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0058b111  50                   push eax
// 0058b112  51                   push ecx
// 0058b113  8974240c             mov dword ptr [esp + 0xc], esi
// 0058b117  e884f1ffff           call 0x58a2a0
// 0058b11c  50                   push eax
// 0058b11d  8bce                 mov ecx, esi
// 0058b11f  e86ca60000           call 0x595790
// 0058b124  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058b128  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058b12c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058b134  c70630198300         mov dword ptr [esi], 0x831930
// 0058b13a  895638               mov dword ptr [esi + 0x38], edx
// 0058b13d  89463c               mov dword ptr [esi + 0x3c], eax
// 0058b140  e8db1efeff           call 0x56d020
// 0058b145  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058b149  894614               mov dword ptr [esi + 0x14], eax
// 0058b14c  8bc6                 mov eax, esi
// 0058b14e  5e                   pop esi
// 0058b14f  64890d00000000       mov dword ptr fs:[0], ecx
// 0058b156  83c410               add esp, 0x10
// 0058b159  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
