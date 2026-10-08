// roc 2008-06 004a4930  unit: VDHTMLWindow::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a4930
//
// 004a4930  6aff                 push -1
// 004a4932  68082d7d00           push 0x7d2d08
// 004a4937  64a100000000         mov eax, dword ptr fs:[0]
// 004a493d  50                   push eax
// 004a493e  64892500000000       mov dword ptr fs:[0], esp
// 004a4945  51                   push ecx
// 004a4946  8b442420             mov eax, dword ptr [esp + 0x20]
// 004a494a  56                   push esi
// 004a494b  8bf1                 mov esi, ecx
// 004a494d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004a4951  50                   push eax
// 004a4952  51                   push ecx
// 004a4953  8974240c             mov dword ptr [esp + 0xc], esi
// 004a4957  e844a2ffff           call 0x49eba0
// 004a495c  50                   push eax
// 004a495d  8bce                 mov ecx, esi
// 004a495f  e82c0e0f00           call 0x595790
// 004a4964  8b542418             mov edx, dword ptr [esp + 0x18]
// 004a4968  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a496c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004a4974  c706f0398200         mov dword ptr [esi], 0x8239f0
// 004a497a  895638               mov dword ptr [esi + 0x38], edx
// 004a497d  89463c               mov dword ptr [esi + 0x3c], eax
// 004a4980  e83b820c00           call 0x56cbc0
// 004a4985  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a4989  894614               mov dword ptr [esi + 0x14], eax
// 004a498c  8bc6                 mov eax, esi
// 004a498e  5e                   pop esi
// 004a498f  64890d00000000       mov dword ptr fs:[0], ecx
// 004a4996  83c410               add esp, 0x10
// 004a4999  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
