// roc 2007-08 005aee10  unit: RBX::VLighting::?$FactoryProduct  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aee10
//
// 005aee10  6aff                 push -1
// 005aee12  6888587500           push 0x755888
// 005aee17  64a100000000         mov eax, dword ptr fs:[0]
// 005aee1d  50                   push eax
// 005aee1e  64892500000000       mov dword ptr fs:[0], esp
// 005aee25  51                   push ecx
// 005aee26  8b442420             mov eax, dword ptr [esp + 0x20]
// 005aee2a  56                   push esi
// 005aee2b  8bf1                 mov esi, ecx
// 005aee2d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005aee31  50                   push eax
// 005aee32  51                   push ecx
// 005aee33  8974240c             mov dword ptr [esp + 0xc], esi
// 005aee37  e8f4f9ffff           call 0x5ae830
// 005aee3c  50                   push eax
// 005aee3d  8bce                 mov ecx, esi
// 005aee3f  e86c1ffcff           call 0x570db0
// 005aee44  8b542418             mov edx, dword ptr [esp + 0x18]
// 005aee48  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005aee4c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005aee54  c7063c5c7b00         mov dword ptr [esi], 0x7b5c3c
// 005aee5a  895628               mov dword ptr [esi + 0x28], edx
// 005aee5d  89462c               mov dword ptr [esi + 0x2c], eax
// 005aee60  e84beafbff           call 0x56d8b0
// 005aee65  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005aee69  894614               mov dword ptr [esi + 0x14], eax
// 005aee6c  8bc6                 mov eax, esi
// 005aee6e  5e                   pop esi
// 005aee6f  64890d00000000       mov dword ptr fs:[0], ecx
// 005aee76  83c410               add esp, 0x10
// 005aee79  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
