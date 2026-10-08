// roc 2007-03 005a6490  unit: seg_005a0000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a6490
//
// 005a6490  6aff                 push -1
// 005a6492  6808137500           push 0x751308
// 005a6497  64a100000000         mov eax, dword ptr fs:[0]
// 005a649d  50                   push eax
// 005a649e  64892500000000       mov dword ptr fs:[0], esp
// 005a64a5  51                   push ecx
// 005a64a6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a64aa  56                   push esi
// 005a64ab  8bf1                 mov esi, ecx
// 005a64ad  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a64b1  50                   push eax
// 005a64b2  51                   push ecx
// 005a64b3  8974240c             mov dword ptr [esp + 0xc], esi
// 005a64b7  e834fcffff           call 0x5a60f0
// 005a64bc  50                   push eax
// 005a64bd  8bce                 mov ecx, esi
// 005a64bf  e8ccaafcff           call 0x570f90
// 005a64c4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a64c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a64cc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005a64d4  c706605c7b00         mov dword ptr [esi], 0x7b5c60
// 005a64da  895628               mov dword ptr [esi + 0x28], edx
// 005a64dd  89462c               mov dword ptr [esi + 0x2c], eax
// 005a64e0  e8fb68fcff           call 0x56cde0
// 005a64e5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a64e9  894614               mov dword ptr [esi + 0x14], eax
// 005a64ec  8bc6                 mov eax, esi
// 005a64ee  5e                   pop esi
// 005a64ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005a64f6  83c410               add esp, 0x10
// 005a64f9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
