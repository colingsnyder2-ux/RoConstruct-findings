// roc 2008-06 00567f10  unit: RBX::VSelection::?$FactoryProduct  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00567f10
//
// 00567f10  6aff                 push -1
// 00567f12  68082d7d00           push 0x7d2d08
// 00567f17  64a100000000         mov eax, dword ptr fs:[0]
// 00567f1d  50                   push eax
// 00567f1e  64892500000000       mov dword ptr fs:[0], esp
// 00567f25  51                   push ecx
// 00567f26  8b442420             mov eax, dword ptr [esp + 0x20]
// 00567f2a  56                   push esi
// 00567f2b  8bf1                 mov esi, ecx
// 00567f2d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00567f31  50                   push eax
// 00567f32  51                   push ecx
// 00567f33  8974240c             mov dword ptr [esp + 0xc], esi
// 00567f37  e864f2ffff           call 0x5671a0
// 00567f3c  50                   push eax
// 00567f3d  8bce                 mov ecx, esi
// 00567f3f  e84cd80200           call 0x595790
// 00567f44  8b542418             mov edx, dword ptr [esp + 0x18]
// 00567f48  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00567f4c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00567f54  c706c8ee8200         mov dword ptr [esi], 0x82eec8
// 00567f5a  895638               mov dword ptr [esi + 0x38], edx
// 00567f5d  89463c               mov dword ptr [esi + 0x3c], eax
// 00567f60  e8eb4b0000           call 0x56cb50
// 00567f65  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00567f69  894614               mov dword ptr [esi + 0x14], eax
// 00567f6c  8bc6                 mov eax, esi
// 00567f6e  5e                   pop esi
// 00567f6f  64890d00000000       mov dword ptr fs:[0], ecx
// 00567f76  83c410               add esp, 0x10
// 00567f79  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
