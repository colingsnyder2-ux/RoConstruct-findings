// roc 2008-06 0058b020  unit: RBX::VChangeHistoryService::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058b020
//
// 0058b020  6aff                 push -1
// 0058b022  68082d7d00           push 0x7d2d08
// 0058b027  64a100000000         mov eax, dword ptr fs:[0]
// 0058b02d  50                   push eax
// 0058b02e  64892500000000       mov dword ptr fs:[0], esp
// 0058b035  51                   push ecx
// 0058b036  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058b03a  56                   push esi
// 0058b03b  8bf1                 mov esi, ecx
// 0058b03d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0058b041  50                   push eax
// 0058b042  51                   push ecx
// 0058b043  8974240c             mov dword ptr [esp + 0xc], esi
// 0058b047  e854f2ffff           call 0x58a2a0
// 0058b04c  50                   push eax
// 0058b04d  8bce                 mov ecx, esi
// 0058b04f  e83ca70000           call 0x595790
// 0058b054  8b542418             mov edx, dword ptr [esp + 0x18]
// 0058b058  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058b05c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058b064  c70624198300         mov dword ptr [esi], 0x831924
// 0058b06a  895638               mov dword ptr [esi + 0x38], edx
// 0058b06d  89463c               mov dword ptr [esi + 0x3c], eax
// 0058b070  e8db990000           call 0x594a50
// 0058b075  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058b079  894614               mov dword ptr [esi + 0x14], eax
// 0058b07c  8bc6                 mov eax, esi
// 0058b07e  5e                   pop esi
// 0058b07f  64890d00000000       mov dword ptr fs:[0], ecx
// 0058b086  83c410               add esp, 0x10
// 0058b089  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
