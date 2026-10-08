// roc 2008-06 004b3f30  unit: RBX::Network::VPeer::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b3f30
//
// 004b3f30  6aff                 push -1
// 004b3f32  68082d7d00           push 0x7d2d08
// 004b3f37  64a100000000         mov eax, dword ptr fs:[0]
// 004b3f3d  50                   push eax
// 004b3f3e  64892500000000       mov dword ptr fs:[0], esp
// 004b3f45  51                   push ecx
// 004b3f46  8b442420             mov eax, dword ptr [esp + 0x20]
// 004b3f4a  56                   push esi
// 004b3f4b  8bf1                 mov esi, ecx
// 004b3f4d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004b3f51  50                   push eax
// 004b3f52  51                   push ecx
// 004b3f53  8974240c             mov dword ptr [esp + 0xc], esi
// 004b3f57  e8a4f8ffff           call 0x4b3800
// 004b3f5c  50                   push eax
// 004b3f5d  8bce                 mov ecx, esi
// 004b3f5f  e82c180e00           call 0x595790
// 004b3f64  8b542418             mov edx, dword ptr [esp + 0x18]
// 004b3f68  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004b3f6c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b3f74  c706a84c8200         mov dword ptr [esi], 0x824ca8
// 004b3f7a  895638               mov dword ptr [esi + 0x38], edx
// 004b3f7d  89463c               mov dword ptr [esi + 0x3c], eax
// 004b3f80  e8eb8a0b00           call 0x56ca70
// 004b3f85  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b3f89  894614               mov dword ptr [esi + 0x14], eax
// 004b3f8c  8bc6                 mov eax, esi
// 004b3f8e  5e                   pop esi
// 004b3f8f  64890d00000000       mov dword ptr fs:[0], ecx
// 004b3f96  83c410               add esp, 0x10
// 004b3f99  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
