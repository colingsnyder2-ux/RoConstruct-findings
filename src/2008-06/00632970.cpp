// roc 2008-06 00632970  unit: RBX::VBodyPosition::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00632970
//
// 00632970  6aff                 push -1
// 00632972  68082d7d00           push 0x7d2d08
// 00632977  64a100000000         mov eax, dword ptr fs:[0]
// 0063297d  50                   push eax
// 0063297e  64892500000000       mov dword ptr fs:[0], esp
// 00632985  51                   push ecx
// 00632986  8b442420             mov eax, dword ptr [esp + 0x20]
// 0063298a  56                   push esi
// 0063298b  8bf1                 mov esi, ecx
// 0063298d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00632991  50                   push eax
// 00632992  51                   push ecx
// 00632993  8974240c             mov dword ptr [esp + 0xc], esi
// 00632997  e854e1ffff           call 0x630af0
// 0063299c  50                   push eax
// 0063299d  8bce                 mov ecx, esi
// 0063299f  e8ec2df6ff           call 0x595790
// 006329a4  8b542418             mov edx, dword ptr [esp + 0x18]
// 006329a8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006329ac  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006329b4  c706cc7f8400         mov dword ptr [esi], 0x847fcc
// 006329ba  895638               mov dword ptr [esi + 0x38], edx
// 006329bd  89463c               mov dword ptr [esi + 0x3c], eax
// 006329c0  e89ba4f3ff           call 0x56ce60
// 006329c5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006329c9  894614               mov dword ptr [esi + 0x14], eax
// 006329cc  8bc6                 mov eax, esi
// 006329ce  5e                   pop esi
// 006329cf  64890d00000000       mov dword ptr fs:[0], ecx
// 006329d6  83c410               add esp, 0x10
// 006329d9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
