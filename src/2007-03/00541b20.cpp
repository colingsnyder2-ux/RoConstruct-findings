// roc 2007-03 00541b20  unit: seg_00540000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00541b20
//
// 00541b20  6aff                 push -1
// 00541b22  6808137500           push 0x751308
// 00541b27  64a100000000         mov eax, dword ptr fs:[0]
// 00541b2d  50                   push eax
// 00541b2e  64892500000000       mov dword ptr fs:[0], esp
// 00541b35  51                   push ecx
// 00541b36  8b442420             mov eax, dword ptr [esp + 0x20]
// 00541b3a  56                   push esi
// 00541b3b  8bf1                 mov esi, ecx
// 00541b3d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00541b41  50                   push eax
// 00541b42  51                   push ecx
// 00541b43  8974240c             mov dword ptr [esp + 0xc], esi
// 00541b47  e81480edff           call 0x419b60
// 00541b4c  50                   push eax
// 00541b4d  8bce                 mov ecx, esi
// 00541b4f  e83cf40200           call 0x570f90
// 00541b54  8b542418             mov edx, dword ptr [esp + 0x18]
// 00541b58  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00541b5c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00541b64  c70690677a00         mov dword ptr [esi], 0x7a6790
// 00541b6a  895628               mov dword ptr [esi + 0x28], edx
// 00541b6d  89462c               mov dword ptr [esi + 0x2c], eax
// 00541b70  e8ebb50200           call 0x56d160
// 00541b75  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00541b79  894614               mov dword ptr [esi + 0x14], eax
// 00541b7c  8bc6                 mov eax, esi
// 00541b7e  5e                   pop esi
// 00541b7f  64890d00000000       mov dword ptr fs:[0], ecx
// 00541b86  83c410               add esp, 0x10
// 00541b89  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
