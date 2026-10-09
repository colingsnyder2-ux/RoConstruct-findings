// roc 2010-06 0052ea40  unit: RBX::RbxG3D::TextureProxy  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052ea40
//
// 0052ea40  55                   push ebp
// 0052ea41  8bec                 mov ebp, esp
// 0052ea43  6aff                 push -1
// 0052ea45  6811ed9800           push 0x98ed11
// 0052ea4a  64a100000000         mov eax, dword ptr fs:[0]
// 0052ea50  50                   push eax
// 0052ea51  64892500000000       mov dword ptr fs:[0], esp
// 0052ea58  83ec0c               sub esp, 0xc
// 0052ea5b  53                   push ebx
// 0052ea5c  56                   push esi
// 0052ea5d  57                   push edi
// 0052ea5e  8965f0               mov dword ptr [ebp - 0x10], esp
// 0052ea61  6a24                 push 0x24
// 0052ea63  e8388f2700           call 0x7a79a0
// 0052ea68  8bf0                 mov esi, eax
// 0052ea6a  83c404               add esp, 4
// 0052ea6d  8975ec               mov dword ptr [ebp - 0x14], esi
// 0052ea70  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0052ea77  8975e8               mov dword ptr [ebp - 0x18], esi
// 0052ea7a  c645fc01             mov byte ptr [ebp - 4], 1
// 0052ea7e  85f6                 test esi, esi
// 0052ea80  741b                 je 0x52ea9d
// 0052ea82  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0052ea85  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0052ea88  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0052ea8b  50                   push eax
// 0052ea8c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0052ea8f  51                   push ecx
// 0052ea90  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0052ea93  52                   push edx
// 0052ea94  50                   push eax
// 0052ea95  51                   push ecx
// 0052ea96  8bce                 mov ecx, esi
// 0052ea98  e843f9ffff           call 0x52e3e0
// 0052ea9d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0052eaa0  5f                   pop edi
// 0052eaa1  8bc6                 mov eax, esi
// 0052eaa3  5e                   pop esi
// 0052eaa4  64890d00000000       mov dword ptr fs:[0], ecx
// 0052eaab  5b                   pop ebx
// 0052eaac  8be5                 mov esp, ebp
// 0052eaae  5d                   pop ebp
// 0052eaaf  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
