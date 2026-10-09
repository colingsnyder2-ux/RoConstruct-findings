// roc 2010-06 0052ead0  unit: RBX::RbxG3D::TextureProxy  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052ead0
//
// 0052ead0  55                   push ebp
// 0052ead1  8bec                 mov ebp, esp
// 0052ead3  6aff                 push -1
// 0052ead5  6831ed9800           push 0x98ed31
// 0052eada  64a100000000         mov eax, dword ptr fs:[0]
// 0052eae0  50                   push eax
// 0052eae1  64892500000000       mov dword ptr fs:[0], esp
// 0052eae8  83ec0c               sub esp, 0xc
// 0052eaeb  53                   push ebx
// 0052eaec  56                   push esi
// 0052eaed  57                   push edi
// 0052eaee  8965f0               mov dword ptr [ebp - 0x10], esp
// 0052eaf1  6a2c                 push 0x2c
// 0052eaf3  e8a88e2700           call 0x7a79a0
// 0052eaf8  8bf0                 mov esi, eax
// 0052eafa  83c404               add esp, 4
// 0052eafd  8975ec               mov dword ptr [ebp - 0x14], esi
// 0052eb00  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0052eb07  8975e8               mov dword ptr [ebp - 0x18], esi
// 0052eb0a  c645fc01             mov byte ptr [ebp - 4], 1
// 0052eb0e  85f6                 test esi, esi
// 0052eb10  741b                 je 0x52eb2d
// 0052eb12  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0052eb15  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0052eb18  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0052eb1b  50                   push eax
// 0052eb1c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0052eb1f  51                   push ecx
// 0052eb20  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0052eb23  52                   push edx
// 0052eb24  50                   push eax
// 0052eb25  51                   push ecx
// 0052eb26  8bce                 mov ecx, esi
// 0052eb28  e813f9ffff           call 0x52e440
// 0052eb2d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0052eb30  5f                   pop edi
// 0052eb31  8bc6                 mov eax, esi
// 0052eb33  5e                   pop esi
// 0052eb34  64890d00000000       mov dword ptr fs:[0], ecx
// 0052eb3b  5b                   pop ebx
// 0052eb3c  8be5                 mov esp, ebp
// 0052eb3e  5d                   pop ebp
// 0052eb3f  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
