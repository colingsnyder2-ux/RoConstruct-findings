// roc 2007-03 00586590  unit: seg_00580000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00586590
//
// 00586590  6aff                 push -1
// 00586592  6808137500           push 0x751308
// 00586597  64a100000000         mov eax, dword ptr fs:[0]
// 0058659d  50                   push eax
// 0058659e  64892500000000       mov dword ptr fs:[0], esp
// 005865a5  51                   push ecx
// 005865a6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005865aa  56                   push esi
// 005865ab  8bf1                 mov esi, ecx
// 005865ad  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005865b1  50                   push eax
// 005865b2  51                   push ecx
// 005865b3  8974240c             mov dword ptr [esp + 0xc], esi
// 005865b7  e8c4f0ffff           call 0x585680
// 005865bc  50                   push eax
// 005865bd  8bce                 mov ecx, esi
// 005865bf  e8cca9feff           call 0x570f90
// 005865c4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005865c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005865cc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005865d4  c706a8007b00         mov dword ptr [esi], 0x7b00a8
// 005865da  895628               mov dword ptr [esi + 0x28], edx
// 005865dd  89462c               mov dword ptr [esi + 0x2c], eax
// 005865e0  e8fb67feff           call 0x56cde0
// 005865e5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005865e9  894614               mov dword ptr [esi + 0x14], eax
// 005865ec  8bc6                 mov eax, esi
// 005865ee  5e                   pop esi
// 005865ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005865f6  83c410               add esp, 0x10
// 005865f9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
