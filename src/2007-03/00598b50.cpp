// roc 2007-03 00598b50  unit: seg_00590000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00598b50
//
// 00598b50  6aff                 push -1
// 00598b52  6808137500           push 0x751308
// 00598b57  64a100000000         mov eax, dword ptr fs:[0]
// 00598b5d  50                   push eax
// 00598b5e  64892500000000       mov dword ptr fs:[0], esp
// 00598b65  51                   push ecx
// 00598b66  8b442420             mov eax, dword ptr [esp + 0x20]
// 00598b6a  56                   push esi
// 00598b6b  8bf1                 mov esi, ecx
// 00598b6d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00598b71  50                   push eax
// 00598b72  51                   push ecx
// 00598b73  8974240c             mov dword ptr [esp + 0xc], esi
// 00598b77  e884eeffff           call 0x597a00
// 00598b7c  50                   push eax
// 00598b7d  8bce                 mov ecx, esi
// 00598b7f  e80c84fdff           call 0x570f90
// 00598b84  8b542418             mov edx, dword ptr [esp + 0x18]
// 00598b88  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00598b8c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00598b94  c706381d7b00         mov dword ptr [esi], 0x7b1d38
// 00598b9a  895628               mov dword ptr [esi + 0x28], edx
// 00598b9d  89462c               mov dword ptr [esi + 0x2c], eax
// 00598ba0  e82b46fdff           call 0x56d1d0
// 00598ba5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00598ba9  894614               mov dword ptr [esi + 0x14], eax
// 00598bac  8bc6                 mov eax, esi
// 00598bae  5e                   pop esi
// 00598baf  64890d00000000       mov dword ptr fs:[0], ecx
// 00598bb6  83c410               add esp, 0x10
// 00598bb9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
