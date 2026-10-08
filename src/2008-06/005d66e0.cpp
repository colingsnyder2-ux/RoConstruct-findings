// roc 2008-06 005d66e0  unit: RBX::VTeams::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d66e0
//
// 005d66e0  6aff                 push -1
// 005d66e2  68082d7d00           push 0x7d2d08
// 005d66e7  64a100000000         mov eax, dword ptr fs:[0]
// 005d66ed  50                   push eax
// 005d66ee  64892500000000       mov dword ptr fs:[0], esp
// 005d66f5  51                   push ecx
// 005d66f6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005d66fa  56                   push esi
// 005d66fb  8bf1                 mov esi, ecx
// 005d66fd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d6701  50                   push eax
// 005d6702  51                   push ecx
// 005d6703  8974240c             mov dword ptr [esp + 0xc], esi
// 005d6707  e8f4f8ffff           call 0x5d6000
// 005d670c  50                   push eax
// 005d670d  8bce                 mov ecx, esi
// 005d670f  e87cf0fbff           call 0x595790
// 005d6714  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d6718  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005d671c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d6724  c70664cf8300         mov dword ptr [esi], 0x83cf64
// 005d672a  895638               mov dword ptr [esi + 0x38], edx
// 005d672d  89463c               mov dword ptr [esi + 0x3c], eax
// 005d6730  e81b64f9ff           call 0x56cb50
// 005d6735  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d6739  894614               mov dword ptr [esi + 0x14], eax
// 005d673c  8bc6                 mov eax, esi
// 005d673e  5e                   pop esi
// 005d673f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d6746  83c410               add esp, 0x10
// 005d6749  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
