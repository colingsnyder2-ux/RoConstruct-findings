// roc 2009-06 00519290  unit: RBX::PartChunk  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00519290
//
// 00519290  55                   push ebp
// 00519291  8bec                 mov ebp, esp
// 00519293  6aff                 push -1
// 00519295  68d1dd8500           push 0x85ddd1
// 0051929a  64a100000000         mov eax, dword ptr fs:[0]
// 005192a0  50                   push eax
// 005192a1  64892500000000       mov dword ptr fs:[0], esp
// 005192a8  83ec0c               sub esp, 0xc
// 005192ab  53                   push ebx
// 005192ac  56                   push esi
// 005192ad  57                   push edi
// 005192ae  8965f0               mov dword ptr [ebp - 0x10], esp
// 005192b1  6a24                 push 0x24
// 005192b3  e880f71f00           call 0x718a38
// 005192b8  8bf0                 mov esi, eax
// 005192ba  83c404               add esp, 4
// 005192bd  8975ec               mov dword ptr [ebp - 0x14], esi
// 005192c0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005192c7  8975e8               mov dword ptr [ebp - 0x18], esi
// 005192ca  c645fc01             mov byte ptr [ebp - 4], 1
// 005192ce  85f6                 test esi, esi
// 005192d0  741b                 je 0x5192ed
// 005192d2  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005192d5  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 005192d8  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005192db  50                   push eax
// 005192dc  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005192df  51                   push ecx
// 005192e0  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005192e3  52                   push edx
// 005192e4  50                   push eax
// 005192e5  51                   push ecx
// 005192e6  8bce                 mov ecx, esi
// 005192e8  e823f7ffff           call 0x518a10
// 005192ed  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005192f0  5f                   pop edi
// 005192f1  8bc6                 mov eax, esi
// 005192f3  5e                   pop esi
// 005192f4  64890d00000000       mov dword ptr fs:[0], ecx
// 005192fb  5b                   pop ebx
// 005192fc  8be5                 mov esp, ebp
// 005192fe  5d                   pop ebp
// 005192ff  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
