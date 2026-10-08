// roc 2008-06 0055a0c0  unit: RBX::VInstance::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055a0c0
//
// 0055a0c0  6aff                 push -1
// 0055a0c2  68082d7d00           push 0x7d2d08
// 0055a0c7  64a100000000         mov eax, dword ptr fs:[0]
// 0055a0cd  50                   push eax
// 0055a0ce  64892500000000       mov dword ptr fs:[0], esp
// 0055a0d5  51                   push ecx
// 0055a0d6  8b442420             mov eax, dword ptr [esp + 0x20]
// 0055a0da  56                   push esi
// 0055a0db  8bf1                 mov esi, ecx
// 0055a0dd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055a0e1  50                   push eax
// 0055a0e2  51                   push ecx
// 0055a0e3  8974240c             mov dword ptr [esp + 0xc], esi
// 0055a0e7  e8940cebff           call 0x40ad80
// 0055a0ec  50                   push eax
// 0055a0ed  8bce                 mov ecx, esi
// 0055a0ef  e89cb60300           call 0x595790
// 0055a0f4  8b542418             mov edx, dword ptr [esp + 0x18]
// 0055a0f8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0055a0fc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055a104  c706dcd78200         mov dword ptr [esi], 0x82d7dc
// 0055a10a  895638               mov dword ptr [esi + 0x38], edx
// 0055a10d  89463c               mov dword ptr [esi + 0x3c], eax
// 0055a110  e83ba90300           call 0x594a50
// 0055a115  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055a119  894614               mov dword ptr [esi + 0x14], eax
// 0055a11c  8bc6                 mov eax, esi
// 0055a11e  5e                   pop esi
// 0055a11f  64890d00000000       mov dword ptr fs:[0], ecx
// 0055a126  83c410               add esp, 0x10
// 0055a129  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
