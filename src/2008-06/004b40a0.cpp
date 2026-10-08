// roc 2008-06 004b40a0  unit: RBX::Network::VReplicator::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b40a0
//
// 004b40a0  6aff                 push -1
// 004b40a2  68082d7d00           push 0x7d2d08
// 004b40a7  64a100000000         mov eax, dword ptr fs:[0]
// 004b40ad  50                   push eax
// 004b40ae  64892500000000       mov dword ptr fs:[0], esp
// 004b40b5  51                   push ecx
// 004b40b6  8b442420             mov eax, dword ptr [esp + 0x20]
// 004b40ba  56                   push esi
// 004b40bb  8bf1                 mov esi, ecx
// 004b40bd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004b40c1  50                   push eax
// 004b40c2  51                   push ecx
// 004b40c3  8974240c             mov dword ptr [esp + 0xc], esi
// 004b40c7  e834f7ffff           call 0x4b3800
// 004b40cc  50                   push eax
// 004b40cd  8bce                 mov ecx, esi
// 004b40cf  e8bc160e00           call 0x595790
// 004b40d4  8b542418             mov edx, dword ptr [esp + 0x18]
// 004b40d8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004b40dc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b40e4  c706b44c8200         mov dword ptr [esi], 0x824cb4
// 004b40ea  895638               mov dword ptr [esi + 0x38], edx
// 004b40ed  89463c               mov dword ptr [esi + 0x3c], eax
// 004b40f0  e85b090e00           call 0x594a50
// 004b40f5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b40f9  894614               mov dword ptr [esi + 0x14], eax
// 004b40fc  8bc6                 mov eax, esi
// 004b40fe  5e                   pop esi
// 004b40ff  64890d00000000       mov dword ptr fs:[0], ecx
// 004b4106  83c410               add esp, 0x10
// 004b4109  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
