// roc 2007-03 0055cf60  unit: seg_00550000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055cf60
//
// 0055cf60  6aff                 push -1
// 0055cf62  6808137500           push 0x751308
// 0055cf67  64a100000000         mov eax, dword ptr fs:[0]
// 0055cf6d  50                   push eax
// 0055cf6e  64892500000000       mov dword ptr fs:[0], esp
// 0055cf75  51                   push ecx
// 0055cf76  8b442420             mov eax, dword ptr [esp + 0x20]
// 0055cf7a  56                   push esi
// 0055cf7b  8bf1                 mov esi, ecx
// 0055cf7d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055cf81  50                   push eax
// 0055cf82  51                   push ecx
// 0055cf83  8974240c             mov dword ptr [esp + 0xc], esi
// 0055cf87  e8b4efffff           call 0x55bf40
// 0055cf8c  50                   push eax
// 0055cf8d  8bce                 mov ecx, esi
// 0055cf8f  e8fc3f0100           call 0x570f90
// 0055cf94  8b542418             mov edx, dword ptr [esp + 0x18]
// 0055cf98  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0055cf9c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055cfa4  c70650a27a00         mov dword ptr [esi], 0x7aa250
// 0055cfaa  895628               mov dword ptr [esi + 0x28], edx
// 0055cfad  89462c               mov dword ptr [esi + 0x2c], eax
// 0055cfb0  e82bfe0000           call 0x56cde0
// 0055cfb5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055cfb9  894614               mov dword ptr [esi + 0x14], eax
// 0055cfbc  8bc6                 mov eax, esi
// 0055cfbe  5e                   pop esi
// 0055cfbf  64890d00000000       mov dword ptr fs:[0], ecx
// 0055cfc6  83c410               add esp, 0x10
// 0055cfc9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
