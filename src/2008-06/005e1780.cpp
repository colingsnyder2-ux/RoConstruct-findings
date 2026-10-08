// roc 2008-06 005e1780  unit: RBX::VLighting::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e1780
//
// 005e1780  6aff                 push -1
// 005e1782  68082d7d00           push 0x7d2d08
// 005e1787  64a100000000         mov eax, dword ptr fs:[0]
// 005e178d  50                   push eax
// 005e178e  64892500000000       mov dword ptr fs:[0], esp
// 005e1795  51                   push ecx
// 005e1796  8b442420             mov eax, dword ptr [esp + 0x20]
// 005e179a  56                   push esi
// 005e179b  8bf1                 mov esi, ecx
// 005e179d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e17a1  50                   push eax
// 005e17a2  51                   push ecx
// 005e17a3  8974240c             mov dword ptr [esp + 0xc], esi
// 005e17a7  e854f9ffff           call 0x5e1100
// 005e17ac  50                   push eax
// 005e17ad  8bce                 mov ecx, esi
// 005e17af  e8dc3ffbff           call 0x595790
// 005e17b4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e17b8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e17bc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e17c4  c70618de8300         mov dword ptr [esi], 0x83de18
// 005e17ca  895638               mov dword ptr [esi + 0x38], edx
// 005e17cd  89463c               mov dword ptr [esi + 0x3c], eax
// 005e17d0  e83bb5f8ff           call 0x56cd10
// 005e17d5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e17d9  894614               mov dword ptr [esi + 0x14], eax
// 005e17dc  8bc6                 mov eax, esi
// 005e17de  5e                   pop esi
// 005e17df  64890d00000000       mov dword ptr fs:[0], ecx
// 005e17e6  83c410               add esp, 0x10
// 005e17e9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
