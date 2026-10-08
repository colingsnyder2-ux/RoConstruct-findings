// roc 2008-06 00559f50  unit: RBX::VInstance::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00559f50
//
// 00559f50  6aff                 push -1
// 00559f52  68082d7d00           push 0x7d2d08
// 00559f57  64a100000000         mov eax, dword ptr fs:[0]
// 00559f5d  50                   push eax
// 00559f5e  64892500000000       mov dword ptr fs:[0], esp
// 00559f65  51                   push ecx
// 00559f66  8b442420             mov eax, dword ptr [esp + 0x20]
// 00559f6a  56                   push esi
// 00559f6b  8bf1                 mov esi, ecx
// 00559f6d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00559f71  50                   push eax
// 00559f72  51                   push ecx
// 00559f73  8974240c             mov dword ptr [esp + 0xc], esi
// 00559f77  e8040eebff           call 0x40ad80
// 00559f7c  50                   push eax
// 00559f7d  8bce                 mov ecx, esi
// 00559f7f  e80cb80300           call 0x595790
// 00559f84  8b542418             mov edx, dword ptr [esp + 0x18]
// 00559f88  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00559f8c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00559f94  c706d0d78200         mov dword ptr [esi], 0x82d7d0
// 00559f9a  895638               mov dword ptr [esi + 0x38], edx
// 00559f9d  89463c               mov dword ptr [esi + 0x3c], eax
// 00559fa0  e83b2b0100           call 0x56cae0
// 00559fa5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00559fa9  894614               mov dword ptr [esi + 0x14], eax
// 00559fac  8bc6                 mov eax, esi
// 00559fae  5e                   pop esi
// 00559faf  64890d00000000       mov dword ptr fs:[0], ecx
// 00559fb6  83c410               add esp, 0x10
// 00559fb9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
