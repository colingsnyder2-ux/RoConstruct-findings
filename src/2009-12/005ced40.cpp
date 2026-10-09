// roc 2009-12 005ced40  unit: RBX::PartChunk  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ced40
//
// 005ced40  55                   push ebp
// 005ced41  8bec                 mov ebp, esp
// 005ced43  6aff                 push -1
// 005ced45  6841d09300           push 0x93d041
// 005ced4a  64a100000000         mov eax, dword ptr fs:[0]
// 005ced50  50                   push eax
// 005ced51  64892500000000       mov dword ptr fs:[0], esp
// 005ced58  83ec0c               sub esp, 0xc
// 005ced5b  53                   push ebx
// 005ced5c  56                   push esi
// 005ced5d  57                   push edi
// 005ced5e  8965f0               mov dword ptr [ebp - 0x10], esp
// 005ced61  6a24                 push 0x24
// 005ced63  e8f84a2200           call 0x7f3860
// 005ced68  8bf0                 mov esi, eax
// 005ced6a  83c404               add esp, 4
// 005ced6d  8975ec               mov dword ptr [ebp - 0x14], esi
// 005ced70  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005ced77  8975e8               mov dword ptr [ebp - 0x18], esi
// 005ced7a  c645fc01             mov byte ptr [ebp - 4], 1
// 005ced7e  85f6                 test esi, esi
// 005ced80  741b                 je 0x5ced9d
// 005ced82  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005ced85  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 005ced88  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005ced8b  50                   push eax
// 005ced8c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005ced8f  51                   push ecx
// 005ced90  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ced93  52                   push edx
// 005ced94  50                   push eax
// 005ced95  51                   push ecx
// 005ced96  8bce                 mov ecx, esi
// 005ced98  e873f7ffff           call 0x5ce510
// 005ced9d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005ceda0  5f                   pop edi
// 005ceda1  8bc6                 mov eax, esi
// 005ceda3  5e                   pop esi
// 005ceda4  64890d00000000       mov dword ptr fs:[0], ecx
// 005cedab  5b                   pop ebx
// 005cedac  8be5                 mov esp, ebp
// 005cedae  5d                   pop ebp
// 005cedaf  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
