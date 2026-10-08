// roc 2008-06 0049b5f0  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049b5f0
//
// 0049b5f0  6aff                 push -1
// 0049b5f2  68082d7d00           push 0x7d2d08
// 0049b5f7  64a100000000         mov eax, dword ptr fs:[0]
// 0049b5fd  50                   push eax
// 0049b5fe  64892500000000       mov dword ptr fs:[0], esp
// 0049b605  51                   push ecx
// 0049b606  8b442420             mov eax, dword ptr [esp + 0x20]
// 0049b60a  56                   push esi
// 0049b60b  8bf1                 mov esi, ecx
// 0049b60d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049b611  50                   push eax
// 0049b612  51                   push ecx
// 0049b613  8974240c             mov dword ptr [esp + 0xc], esi
// 0049b617  e884f2ffff           call 0x49a8a0
// 0049b61c  50                   push eax
// 0049b61d  8bce                 mov ecx, esi
// 0049b61f  e86ca10f00           call 0x595790
// 0049b624  8b542418             mov edx, dword ptr [esp + 0x18]
// 0049b628  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0049b62c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049b634  c706ac298200         mov dword ptr [esi], 0x8229ac
// 0049b63a  895638               mov dword ptr [esi + 0x38], edx
// 0049b63d  89463c               mov dword ptr [esi + 0x3c], eax
// 0049b640  e80b150d00           call 0x56cb50
// 0049b645  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049b649  894614               mov dword ptr [esi + 0x14], eax
// 0049b64c  8bc6                 mov eax, esi
// 0049b64e  5e                   pop esi
// 0049b64f  64890d00000000       mov dword ptr fs:[0], ecx
// 0049b656  83c410               add esp, 0x10
// 0049b659  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
