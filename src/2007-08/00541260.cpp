// roc 2007-08 00541260  unit: RBX::VInstance::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00541260
//
// 00541260  6aff                 push -1
// 00541262  6888587500           push 0x755888
// 00541267  64a100000000         mov eax, dword ptr fs:[0]
// 0054126d  50                   push eax
// 0054126e  64892500000000       mov dword ptr fs:[0], esp
// 00541275  51                   push ecx
// 00541276  8b442420             mov eax, dword ptr [esp + 0x20]
// 0054127a  56                   push esi
// 0054127b  8bf1                 mov esi, ecx
// 0054127d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00541281  50                   push eax
// 00541282  51                   push ecx
// 00541283  8974240c             mov dword ptr [esp + 0xc], esi
// 00541287  e80474edff           call 0x418690
// 0054128c  50                   push eax
// 0054128d  8bce                 mov ecx, esi
// 0054128f  e81cfb0200           call 0x570db0
// 00541294  8b542418             mov edx, dword ptr [esp + 0x18]
// 00541298  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054129c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005412a4  c70698667a00         mov dword ptr [esi], 0x7a6698
// 005412aa  895628               mov dword ptr [esi + 0x28], edx
// 005412ad  89462c               mov dword ptr [esi + 0x2c], eax
// 005412b0  e8abc40200           call 0x56d760
// 005412b5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005412b9  894614               mov dword ptr [esi + 0x14], eax
// 005412bc  8bc6                 mov eax, esi
// 005412be  5e                   pop esi
// 005412bf  64890d00000000       mov dword ptr fs:[0], ecx
// 005412c6  83c410               add esp, 0x10
// 005412c9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
