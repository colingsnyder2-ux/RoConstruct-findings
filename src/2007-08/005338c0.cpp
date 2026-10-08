// roc 2007-08 005338c0  unit: RBX::VSelection::?$FactoryProduct  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005338c0
//
// 005338c0  6aff                 push -1
// 005338c2  6888587500           push 0x755888
// 005338c7  64a100000000         mov eax, dword ptr fs:[0]
// 005338cd  50                   push eax
// 005338ce  64892500000000       mov dword ptr fs:[0], esp
// 005338d5  51                   push ecx
// 005338d6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005338da  56                   push esi
// 005338db  8bf1                 mov esi, ecx
// 005338dd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005338e1  50                   push eax
// 005338e2  51                   push ecx
// 005338e3  8974240c             mov dword ptr [esp + 0xc], esi
// 005338e7  e8d4f2ffff           call 0x532bc0
// 005338ec  50                   push eax
// 005338ed  8bce                 mov ecx, esi
// 005338ef  e8bcd40300           call 0x570db0
// 005338f4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005338f8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005338fc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00533904  c70684557a00         mov dword ptr [esi], 0x7a5584
// 0053390a  895628               mov dword ptr [esi + 0x28], edx
// 0053390d  89462c               mov dword ptr [esi + 0x2c], eax
// 00533910  e84b9e0300           call 0x56d760
// 00533915  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00533919  894614               mov dword ptr [esi + 0x14], eax
// 0053391c  8bc6                 mov eax, esi
// 0053391e  5e                   pop esi
// 0053391f  64890d00000000       mov dword ptr fs:[0], ecx
// 00533926  83c410               add esp, 0x10
// 00533929  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
