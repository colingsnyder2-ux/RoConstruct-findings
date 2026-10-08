// roc 2007-08 004d2230  unit: RBX::Render::TextureProxy  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d2230
//
// 004d2230  55                   push ebp
// 004d2231  8bec                 mov ebp, esp
// 004d2233  6aff                 push -1
// 004d2235  6821c57400           push 0x74c521
// 004d223a  64a100000000         mov eax, dword ptr fs:[0]
// 004d2240  50                   push eax
// 004d2241  64892500000000       mov dword ptr fs:[0], esp
// 004d2248  83ec0c               sub esp, 0xc
// 004d224b  53                   push ebx
// 004d224c  56                   push esi
// 004d224d  57                   push edi
// 004d224e  8965f0               mov dword ptr [ebp - 0x10], esp
// 004d2251  6a2c                 push 0x2c
// 004d2253  e89edc1500           call 0x62fef6
// 004d2258  8bf0                 mov esi, eax
// 004d225a  83c404               add esp, 4
// 004d225d  8975ec               mov dword ptr [ebp - 0x14], esi
// 004d2260  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004d2267  8975e8               mov dword ptr [ebp - 0x18], esi
// 004d226a  85f6                 test esi, esi
// 004d226c  c645fc01             mov byte ptr [ebp - 4], 1
// 004d2270  741b                 je 0x4d228d
// 004d2272  8b4518               mov eax, dword ptr [ebp + 0x18]
// 004d2275  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004d2278  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004d227b  50                   push eax
// 004d227c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004d227f  51                   push ecx
// 004d2280  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004d2283  52                   push edx
// 004d2284  50                   push eax
// 004d2285  51                   push ecx
// 004d2286  8bce                 mov ecx, esi
// 004d2288  e8a3f8ffff           call 0x4d1b30
// 004d228d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004d2290  5f                   pop edi
// 004d2291  8bc6                 mov eax, esi
// 004d2293  5e                   pop esi
// 004d2294  64890d00000000       mov dword ptr fs:[0], ecx
// 004d229b  5b                   pop ebx
// 004d229c  8be5                 mov esp, ebp
// 004d229e  5d                   pop ebp
// 004d229f  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
