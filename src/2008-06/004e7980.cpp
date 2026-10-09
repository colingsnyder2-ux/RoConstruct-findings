// roc 2008-06 004e7980  unit: RBX::ViewNew::Texture  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e7980
//
// 004e7980  55                   push ebp
// 004e7981  8bec                 mov ebp, esp
// 004e7983  6aff                 push -1
// 004e7985  68b1a57c00           push 0x7ca5b1
// 004e798a  64a100000000         mov eax, dword ptr fs:[0]
// 004e7990  50                   push eax
// 004e7991  64892500000000       mov dword ptr fs:[0], esp
// 004e7998  83ec0c               sub esp, 0xc
// 004e799b  53                   push ebx
// 004e799c  56                   push esi
// 004e799d  57                   push edi
// 004e799e  8965f0               mov dword ptr [ebp - 0x10], esp
// 004e79a1  6a2c                 push 0x2c
// 004e79a3  e8788f1b00           call 0x6a0920
// 004e79a8  8bf0                 mov esi, eax
// 004e79aa  83c404               add esp, 4
// 004e79ad  8975ec               mov dword ptr [ebp - 0x14], esi
// 004e79b0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004e79b7  8975e8               mov dword ptr [ebp - 0x18], esi
// 004e79ba  c645fc01             mov byte ptr [ebp - 4], 1
// 004e79be  85f6                 test esi, esi
// 004e79c0  741b                 je 0x4e79dd
// 004e79c2  8b4518               mov eax, dword ptr [ebp + 0x18]
// 004e79c5  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004e79c8  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004e79cb  50                   push eax
// 004e79cc  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004e79cf  51                   push ecx
// 004e79d0  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004e79d3  52                   push edx
// 004e79d4  50                   push eax
// 004e79d5  51                   push ecx
// 004e79d6  8bce                 mov ecx, esi
// 004e79d8  e873f6ffff           call 0x4e7050
// 004e79dd  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004e79e0  5f                   pop edi
// 004e79e1  8bc6                 mov eax, esi
// 004e79e3  5e                   pop esi
// 004e79e4  64890d00000000       mov dword ptr fs:[0], ecx
// 004e79eb  5b                   pop ebx
// 004e79ec  8be5                 mov esp, ebp
// 004e79ee  5d                   pop ebp
// 004e79ef  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
