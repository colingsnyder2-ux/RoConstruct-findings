// roc 2007-08 00541190  unit: RBX::VInstance::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00541190
//
// 00541190  6aff                 push -1
// 00541192  6888587500           push 0x755888
// 00541197  64a100000000         mov eax, dword ptr fs:[0]
// 0054119d  50                   push eax
// 0054119e  64892500000000       mov dword ptr fs:[0], esp
// 005411a5  51                   push ecx
// 005411a6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005411aa  56                   push esi
// 005411ab  8bf1                 mov esi, ecx
// 005411ad  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005411b1  50                   push eax
// 005411b2  51                   push ecx
// 005411b3  8974240c             mov dword ptr [esp + 0xc], esi
// 005411b7  e8d474edff           call 0x418690
// 005411bc  50                   push eax
// 005411bd  8bce                 mov ecx, esi
// 005411bf  e8ecfb0200           call 0x570db0
// 005411c4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005411c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005411cc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005411d4  c7068c667a00         mov dword ptr [esi], 0x7a668c
// 005411da  895628               mov dword ptr [esi + 0x28], edx
// 005411dd  89462c               mov dword ptr [esi + 0x2c], eax
// 005411e0  e86bc10200           call 0x56d350
// 005411e5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005411e9  894614               mov dword ptr [esi + 0x14], eax
// 005411ec  8bc6                 mov eax, esi
// 005411ee  5e                   pop esi
// 005411ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005411f6  83c410               add esp, 0x10
// 005411f9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
