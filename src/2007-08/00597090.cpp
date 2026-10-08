// roc 2007-08 00597090  unit: RBX::Stats::VItem::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00597090
//
// 00597090  6aff                 push -1
// 00597092  6888587500           push 0x755888
// 00597097  64a100000000         mov eax, dword ptr fs:[0]
// 0059709d  50                   push eax
// 0059709e  64892500000000       mov dword ptr fs:[0], esp
// 005970a5  51                   push ecx
// 005970a6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005970aa  56                   push esi
// 005970ab  8bf1                 mov esi, ecx
// 005970ad  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005970b1  50                   push eax
// 005970b2  51                   push ecx
// 005970b3  8974240c             mov dword ptr [esp + 0xc], esi
// 005970b7  e83431ecff           call 0x45a1f0
// 005970bc  50                   push eax
// 005970bd  8bce                 mov ecx, esi
// 005970bf  e8ec9cfdff           call 0x570db0
// 005970c4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005970c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005970cc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005970d4  c706500f7b00         mov dword ptr [esi], 0x7b0f50
// 005970da  895628               mov dword ptr [esi + 0x28], edx
// 005970dd  89462c               mov dword ptr [esi + 0x2c], eax
// 005970e0  e83b68fdff           call 0x56d920
// 005970e5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005970e9  894614               mov dword ptr [esi + 0x14], eax
// 005970ec  8bc6                 mov eax, esi
// 005970ee  5e                   pop esi
// 005970ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005970f6  83c410               add esp, 0x10
// 005970f9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
