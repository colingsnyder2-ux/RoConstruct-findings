// roc 2007-03 0052f4e0  unit: seg_00520000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052f4e0
//
// 0052f4e0  6aff                 push -1
// 0052f4e2  6808137500           push 0x751308
// 0052f4e7  64a100000000         mov eax, dword ptr fs:[0]
// 0052f4ed  50                   push eax
// 0052f4ee  64892500000000       mov dword ptr fs:[0], esp
// 0052f4f5  51                   push ecx
// 0052f4f6  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052f4fa  56                   push esi
// 0052f4fb  8bf1                 mov esi, ecx
// 0052f4fd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052f501  50                   push eax
// 0052f502  51                   push ecx
// 0052f503  8974240c             mov dword ptr [esp + 0xc], esi
// 0052f507  e8e4f2ffff           call 0x52e7f0
// 0052f50c  50                   push eax
// 0052f50d  8bce                 mov ecx, esi
// 0052f50f  e87c1a0400           call 0x570f90
// 0052f514  8b542418             mov edx, dword ptr [esp + 0x18]
// 0052f518  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052f51c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0052f524  c706b84b7a00         mov dword ptr [esi], 0x7a4bb8
// 0052f52a  895628               mov dword ptr [esi + 0x28], edx
// 0052f52d  89462c               mov dword ptr [esi + 0x2c], eax
// 0052f530  e82bdc0300           call 0x56d160
// 0052f535  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052f539  894614               mov dword ptr [esi + 0x14], eax
// 0052f53c  8bc6                 mov eax, esi
// 0052f53e  5e                   pop esi
// 0052f53f  64890d00000000       mov dword ptr fs:[0], ecx
// 0052f546  83c410               add esp, 0x10
// 0052f549  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
