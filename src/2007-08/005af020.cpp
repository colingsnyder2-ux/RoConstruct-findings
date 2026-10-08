// roc 2007-08 005af020  unit: RBX::VLighting::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005af020
//
// 005af020  6aff                 push -1
// 005af022  6888587500           push 0x755888
// 005af027  64a100000000         mov eax, dword ptr fs:[0]
// 005af02d  50                   push eax
// 005af02e  64892500000000       mov dword ptr fs:[0], esp
// 005af035  51                   push ecx
// 005af036  8b442420             mov eax, dword ptr [esp + 0x20]
// 005af03a  56                   push esi
// 005af03b  8bf1                 mov esi, ecx
// 005af03d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005af041  50                   push eax
// 005af042  51                   push ecx
// 005af043  8974240c             mov dword ptr [esp + 0xc], esi
// 005af047  e8e4f7ffff           call 0x5ae830
// 005af04c  50                   push eax
// 005af04d  8bce                 mov ecx, esi
// 005af04f  e85c1dfcff           call 0x570db0
// 005af054  8b542418             mov edx, dword ptr [esp + 0x18]
// 005af058  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005af05c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005af064  c706545c7b00         mov dword ptr [esi], 0x7b5c54
// 005af06a  895628               mov dword ptr [esi + 0x28], edx
// 005af06d  89462c               mov dword ptr [esi + 0x2c], eax
// 005af070  e8abe8fbff           call 0x56d920
// 005af075  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005af079  894614               mov dword ptr [esi + 0x14], eax
// 005af07c  8bc6                 mov eax, esi
// 005af07e  5e                   pop esi
// 005af07f  64890d00000000       mov dword ptr fs:[0], ecx
// 005af086  83c410               add esp, 0x10
// 005af089  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
