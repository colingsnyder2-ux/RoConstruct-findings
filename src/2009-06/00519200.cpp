// roc 2009-06 00519200  unit: RBX::PartChunk  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00519200
//
// 00519200  55                   push ebp
// 00519201  8bec                 mov ebp, esp
// 00519203  6aff                 push -1
// 00519205  68b1dd8500           push 0x85ddb1
// 0051920a  64a100000000         mov eax, dword ptr fs:[0]
// 00519210  50                   push eax
// 00519211  64892500000000       mov dword ptr fs:[0], esp
// 00519218  83ec0c               sub esp, 0xc
// 0051921b  53                   push ebx
// 0051921c  56                   push esi
// 0051921d  57                   push edi
// 0051921e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00519221  6a2c                 push 0x2c
// 00519223  e810f81f00           call 0x718a38
// 00519228  8bf0                 mov esi, eax
// 0051922a  83c404               add esp, 4
// 0051922d  8975ec               mov dword ptr [ebp - 0x14], esi
// 00519230  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00519237  8975e8               mov dword ptr [ebp - 0x18], esi
// 0051923a  c645fc01             mov byte ptr [ebp - 4], 1
// 0051923e  85f6                 test esi, esi
// 00519240  741b                 je 0x51925d
// 00519242  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00519245  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00519248  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0051924b  50                   push eax
// 0051924c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0051924f  51                   push ecx
// 00519250  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00519253  52                   push edx
// 00519254  50                   push eax
// 00519255  51                   push ecx
// 00519256  8bce                 mov ecx, esi
// 00519258  e813f8ffff           call 0x518a70
// 0051925d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00519260  5f                   pop edi
// 00519261  8bc6                 mov eax, esi
// 00519263  5e                   pop esi
// 00519264  64890d00000000       mov dword ptr fs:[0], ecx
// 0051926b  5b                   pop ebx
// 0051926c  8be5                 mov esp, ebp
// 0051926e  5d                   pop ebp
// 0051926f  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
