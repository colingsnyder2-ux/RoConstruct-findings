// roc 2007-03 00541bf0  unit: seg_00540000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00541bf0
//
// 00541bf0  6aff                 push -1
// 00541bf2  6808137500           push 0x751308
// 00541bf7  64a100000000         mov eax, dword ptr fs:[0]
// 00541bfd  50                   push eax
// 00541bfe  64892500000000       mov dword ptr fs:[0], esp
// 00541c05  51                   push ecx
// 00541c06  8b442420             mov eax, dword ptr [esp + 0x20]
// 00541c0a  56                   push esi
// 00541c0b  8bf1                 mov esi, ecx
// 00541c0d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00541c11  50                   push eax
// 00541c12  51                   push ecx
// 00541c13  8974240c             mov dword ptr [esp + 0xc], esi
// 00541c17  e8447fedff           call 0x419b60
// 00541c1c  50                   push eax
// 00541c1d  8bce                 mov ecx, esi
// 00541c1f  e86cf30200           call 0x570f90
// 00541c24  8b542418             mov edx, dword ptr [esp + 0x18]
// 00541c28  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00541c2c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00541c34  c7069c677a00         mov dword ptr [esi], 0x7a679c
// 00541c3a  895628               mov dword ptr [esi + 0x28], edx
// 00541c3d  89462c               mov dword ptr [esi + 0x2c], eax
// 00541c40  e89bb10200           call 0x56cde0
// 00541c45  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00541c49  894614               mov dword ptr [esi + 0x14], eax
// 00541c4c  8bc6                 mov eax, esi
// 00541c4e  5e                   pop esi
// 00541c4f  64890d00000000       mov dword ptr fs:[0], ecx
// 00541c56  83c410               add esp, 0x10
// 00541c59  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
