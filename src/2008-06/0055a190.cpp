// roc 2008-06 0055a190  unit: RBX::VInstance::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055a190
//
// 0055a190  6aff                 push -1
// 0055a192  68082d7d00           push 0x7d2d08
// 0055a197  64a100000000         mov eax, dword ptr fs:[0]
// 0055a19d  50                   push eax
// 0055a19e  64892500000000       mov dword ptr fs:[0], esp
// 0055a1a5  51                   push ecx
// 0055a1a6  8b442420             mov eax, dword ptr [esp + 0x20]
// 0055a1aa  56                   push esi
// 0055a1ab  8bf1                 mov esi, ecx
// 0055a1ad  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055a1b1  50                   push eax
// 0055a1b2  51                   push ecx
// 0055a1b3  8974240c             mov dword ptr [esp + 0xc], esi
// 0055a1b7  e8c40bebff           call 0x40ad80
// 0055a1bc  50                   push eax
// 0055a1bd  8bce                 mov ecx, esi
// 0055a1bf  e8ccb50300           call 0x595790
// 0055a1c4  8b542418             mov edx, dword ptr [esp + 0x18]
// 0055a1c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0055a1cc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055a1d4  c706e8d78200         mov dword ptr [esi], 0x82d7e8
// 0055a1da  895638               mov dword ptr [esi + 0x38], edx
// 0055a1dd  89463c               mov dword ptr [esi + 0x3c], eax
// 0055a1e0  e86b290100           call 0x56cb50
// 0055a1e5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055a1e9  894614               mov dword ptr [esi + 0x14], eax
// 0055a1ec  8bc6                 mov eax, esi
// 0055a1ee  5e                   pop esi
// 0055a1ef  64890d00000000       mov dword ptr fs:[0], ecx
// 0055a1f6  83c410               add esp, 0x10
// 0055a1f9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
