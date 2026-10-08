// roc 2007-08 004d22c0  unit: RBX::Render::TextureProxy  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d22c0
//
// 004d22c0  55                   push ebp
// 004d22c1  8bec                 mov ebp, esp
// 004d22c3  6aff                 push -1
// 004d22c5  6841c57400           push 0x74c541
// 004d22ca  64a100000000         mov eax, dword ptr fs:[0]
// 004d22d0  50                   push eax
// 004d22d1  64892500000000       mov dword ptr fs:[0], esp
// 004d22d8  83ec0c               sub esp, 0xc
// 004d22db  53                   push ebx
// 004d22dc  56                   push esi
// 004d22dd  57                   push edi
// 004d22de  8965f0               mov dword ptr [ebp - 0x10], esp
// 004d22e1  6a24                 push 0x24
// 004d22e3  e80edc1500           call 0x62fef6
// 004d22e8  8bf0                 mov esi, eax
// 004d22ea  83c404               add esp, 4
// 004d22ed  8975ec               mov dword ptr [ebp - 0x14], esi
// 004d22f0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004d22f7  8975e8               mov dword ptr [ebp - 0x18], esi
// 004d22fa  85f6                 test esi, esi
// 004d22fc  c645fc01             mov byte ptr [ebp - 4], 1
// 004d2300  741b                 je 0x4d231d
// 004d2302  8b4518               mov eax, dword ptr [ebp + 0x18]
// 004d2305  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004d2308  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004d230b  50                   push eax
// 004d230c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004d230f  51                   push ecx
// 004d2310  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004d2313  52                   push edx
// 004d2314  50                   push eax
// 004d2315  51                   push ecx
// 004d2316  8bce                 mov ecx, esi
// 004d2318  e883f8ffff           call 0x4d1ba0
// 004d231d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004d2320  5f                   pop edi
// 004d2321  8bc6                 mov eax, esi
// 004d2323  5e                   pop esi
// 004d2324  64890d00000000       mov dword ptr fs:[0], ecx
// 004d232b  5b                   pop ebx
// 004d232c  8be5                 mov esp, ebp
// 004d232e  5d                   pop ebp
// 004d232f  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
