// roc 2008-06 004b4170  unit: RBX::Network::VReplicator::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b4170
//
// 004b4170  6aff                 push -1
// 004b4172  68082d7d00           push 0x7d2d08
// 004b4177  64a100000000         mov eax, dword ptr fs:[0]
// 004b417d  50                   push eax
// 004b417e  64892500000000       mov dword ptr fs:[0], esp
// 004b4185  51                   push ecx
// 004b4186  8b442420             mov eax, dword ptr [esp + 0x20]
// 004b418a  56                   push esi
// 004b418b  8bf1                 mov esi, ecx
// 004b418d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004b4191  50                   push eax
// 004b4192  51                   push ecx
// 004b4193  8974240c             mov dword ptr [esp + 0xc], esi
// 004b4197  e864f6ffff           call 0x4b3800
// 004b419c  50                   push eax
// 004b419d  8bce                 mov ecx, esi
// 004b419f  e8ec150e00           call 0x595790
// 004b41a4  8b542418             mov edx, dword ptr [esp + 0x18]
// 004b41a8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004b41ac  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b41b4  c706c04c8200         mov dword ptr [esi], 0x824cc0
// 004b41ba  895638               mov dword ptr [esi + 0x38], edx
// 004b41bd  89463c               mov dword ptr [esi + 0x3c], eax
// 004b41c0  e81b890b00           call 0x56cae0
// 004b41c5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b41c9  894614               mov dword ptr [esi + 0x14], eax
// 004b41cc  8bc6                 mov eax, esi
// 004b41ce  5e                   pop esi
// 004b41cf  64890d00000000       mov dword ptr fs:[0], ecx
// 004b41d6  83c410               add esp, 0x10
// 004b41d9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
