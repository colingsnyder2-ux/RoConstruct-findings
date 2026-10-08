// roc 2007-03 00532e20  unit: seg_00530000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00532e20
//
// 00532e20  6aff                 push -1
// 00532e22  6808137500           push 0x751308
// 00532e27  64a100000000         mov eax, dword ptr fs:[0]
// 00532e2d  50                   push eax
// 00532e2e  64892500000000       mov dword ptr fs:[0], esp
// 00532e35  51                   push ecx
// 00532e36  8b442420             mov eax, dword ptr [esp + 0x20]
// 00532e3a  56                   push esi
// 00532e3b  8bf1                 mov esi, ecx
// 00532e3d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00532e41  50                   push eax
// 00532e42  51                   push ecx
// 00532e43  8974240c             mov dword ptr [esp + 0xc], esi
// 00532e47  e8d4f6ffff           call 0x532520
// 00532e4c  50                   push eax
// 00532e4d  8bce                 mov ecx, esi
// 00532e4f  e83ce10300           call 0x570f90
// 00532e54  8b542418             mov edx, dword ptr [esp + 0x18]
// 00532e58  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00532e5c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00532e64  c706e04f7a00         mov dword ptr [esi], 0x7a4fe0
// 00532e6a  895628               mov dword ptr [esi + 0x28], edx
// 00532e6d  89462c               mov dword ptr [esi + 0x2c], eax
// 00532e70  e86b9f0300           call 0x56cde0
// 00532e75  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00532e79  894614               mov dword ptr [esi + 0x14], eax
// 00532e7c  8bc6                 mov eax, esi
// 00532e7e  5e                   pop esi
// 00532e7f  64890d00000000       mov dword ptr fs:[0], ecx
// 00532e86  83c410               add esp, 0x10
// 00532e89  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
