// roc 2009-12 005cecb0  unit: RBX::PartChunk  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005cecb0
//
// 005cecb0  55                   push ebp
// 005cecb1  8bec                 mov ebp, esp
// 005cecb3  6aff                 push -1
// 005cecb5  6821d09300           push 0x93d021
// 005cecba  64a100000000         mov eax, dword ptr fs:[0]
// 005cecc0  50                   push eax
// 005cecc1  64892500000000       mov dword ptr fs:[0], esp
// 005cecc8  83ec0c               sub esp, 0xc
// 005ceccb  53                   push ebx
// 005ceccc  56                   push esi
// 005ceccd  57                   push edi
// 005cecce  8965f0               mov dword ptr [ebp - 0x10], esp
// 005cecd1  6a2c                 push 0x2c
// 005cecd3  e8884b2200           call 0x7f3860
// 005cecd8  8bf0                 mov esi, eax
// 005cecda  83c404               add esp, 4
// 005cecdd  8975ec               mov dword ptr [ebp - 0x14], esi
// 005cece0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005cece7  8975e8               mov dword ptr [ebp - 0x18], esi
// 005cecea  c645fc01             mov byte ptr [ebp - 4], 1
// 005cecee  85f6                 test esi, esi
// 005cecf0  741b                 je 0x5ced0d
// 005cecf2  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005cecf5  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 005cecf8  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005cecfb  50                   push eax
// 005cecfc  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005cecff  51                   push ecx
// 005ced00  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ced03  52                   push edx
// 005ced04  50                   push eax
// 005ced05  51                   push ecx
// 005ced06  8bce                 mov ecx, esi
// 005ced08  e893f7ffff           call 0x5ce4a0
// 005ced0d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005ced10  5f                   pop edi
// 005ced11  8bc6                 mov eax, esi
// 005ced13  5e                   pop esi
// 005ced14  64890d00000000       mov dword ptr fs:[0], ecx
// 005ced1b  5b                   pop ebx
// 005ced1c  8be5                 mov esp, ebp
// 005ced1e  5d                   pop ebp
// 005ced1f  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
