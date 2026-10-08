// roc 2008-06 0041c3e0  unit: VDHTMLWindow::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041c3e0
//
// 0041c3e0  6aff                 push -1
// 0041c3e2  68082d7d00           push 0x7d2d08
// 0041c3e7  64a100000000         mov eax, dword ptr fs:[0]
// 0041c3ed  50                   push eax
// 0041c3ee  64892500000000       mov dword ptr fs:[0], esp
// 0041c3f5  51                   push ecx
// 0041c3f6  8b442420             mov eax, dword ptr [esp + 0x20]
// 0041c3fa  56                   push esi
// 0041c3fb  8bf1                 mov esi, ecx
// 0041c3fd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0041c401  50                   push eax
// 0041c402  51                   push ecx
// 0041c403  8974240c             mov dword ptr [esp + 0xc], esi
// 0041c407  e894f4ffff           call 0x41b8a0
// 0041c40c  50                   push eax
// 0041c40d  8bce                 mov ecx, esi
// 0041c40f  e87c931700           call 0x595790
// 0041c414  8b542418             mov edx, dword ptr [esp + 0x18]
// 0041c418  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0041c41c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041c424  c70634ef8000         mov dword ptr [esi], 0x80ef34
// 0041c42a  895638               mov dword ptr [esi + 0x38], edx
// 0041c42d  89463c               mov dword ptr [esi + 0x3c], eax
// 0041c430  e81b861700           call 0x594a50
// 0041c435  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041c439  894614               mov dword ptr [esi + 0x14], eax
// 0041c43c  8bc6                 mov eax, esi
// 0041c43e  5e                   pop esi
// 0041c43f  64890d00000000       mov dword ptr fs:[0], ecx
// 0041c446  83c410               add esp, 0x10
// 0041c449  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
