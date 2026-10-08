// roc 2007-03 005419b0  unit: seg_00540000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005419b0
//
// 005419b0  6aff                 push -1
// 005419b2  6808137500           push 0x751308
// 005419b7  64a100000000         mov eax, dword ptr fs:[0]
// 005419bd  50                   push eax
// 005419be  64892500000000       mov dword ptr fs:[0], esp
// 005419c5  51                   push ecx
// 005419c6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005419ca  56                   push esi
// 005419cb  8bf1                 mov esi, ecx
// 005419cd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005419d1  50                   push eax
// 005419d2  51                   push ecx
// 005419d3  8974240c             mov dword ptr [esp + 0xc], esi
// 005419d7  e88481edff           call 0x419b60
// 005419dc  50                   push eax
// 005419dd  8bce                 mov ecx, esi
// 005419df  e8acf50200           call 0x570f90
// 005419e4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005419e8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005419ec  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005419f4  c70684677a00         mov dword ptr [esi], 0x7a6784
// 005419fa  895628               mov dword ptr [esi + 0x28], edx
// 005419fd  89462c               mov dword ptr [esi + 0x2c], eax
// 00541a00  e8ebb60200           call 0x56d0f0
// 00541a05  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00541a09  894614               mov dword ptr [esi + 0x14], eax
// 00541a0c  8bc6                 mov eax, esi
// 00541a0e  5e                   pop esi
// 00541a0f  64890d00000000       mov dword ptr fs:[0], ecx
// 00541a16  83c410               add esp, 0x10
// 00541a19  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
