// roc 2008-06 005c4f80  unit: RBX::VVisit::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c4f80
//
// 005c4f80  6aff                 push -1
// 005c4f82  68082d7d00           push 0x7d2d08
// 005c4f87  64a100000000         mov eax, dword ptr fs:[0]
// 005c4f8d  50                   push eax
// 005c4f8e  64892500000000       mov dword ptr fs:[0], esp
// 005c4f95  51                   push ecx
// 005c4f96  8b442420             mov eax, dword ptr [esp + 0x20]
// 005c4f9a  56                   push esi
// 005c4f9b  8bf1                 mov esi, ecx
// 005c4f9d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005c4fa1  50                   push eax
// 005c4fa2  51                   push ecx
// 005c4fa3  8974240c             mov dword ptr [esp + 0xc], esi
// 005c4fa7  e814b6ffff           call 0x5c05c0
// 005c4fac  50                   push eax
// 005c4fad  8bce                 mov ecx, esi
// 005c4faf  e8dc07fdff           call 0x595790
// 005c4fb4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005c4fb8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005c4fbc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c4fc4  c706dc8e8300         mov dword ptr [esi], 0x838edc
// 005c4fca  895638               mov dword ptr [esi + 0x38], edx
// 005c4fcd  89463c               mov dword ptr [esi + 0x3c], eax
// 005c4fd0  e81b7efaff           call 0x56cdf0
// 005c4fd5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c4fd9  894614               mov dword ptr [esi + 0x14], eax
// 005c4fdc  8bc6                 mov eax, esi
// 005c4fde  5e                   pop esi
// 005c4fdf  64890d00000000       mov dword ptr fs:[0], ecx
// 005c4fe6  83c410               add esp, 0x10
// 005c4fe9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
