// roc 2008-06 004e78f0  unit: RBX::ViewNew::Texture  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e78f0
//
// 004e78f0  55                   push ebp
// 004e78f1  8bec                 mov ebp, esp
// 004e78f3  6aff                 push -1
// 004e78f5  6891a57c00           push 0x7ca591
// 004e78fa  64a100000000         mov eax, dword ptr fs:[0]
// 004e7900  50                   push eax
// 004e7901  64892500000000       mov dword ptr fs:[0], esp
// 004e7908  83ec0c               sub esp, 0xc
// 004e790b  53                   push ebx
// 004e790c  56                   push esi
// 004e790d  57                   push edi
// 004e790e  8965f0               mov dword ptr [ebp - 0x10], esp
// 004e7911  6a24                 push 0x24
// 004e7913  e808901b00           call 0x6a0920
// 004e7918  8bf0                 mov esi, eax
// 004e791a  83c404               add esp, 4
// 004e791d  8975ec               mov dword ptr [ebp - 0x14], esi
// 004e7920  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004e7927  8975e8               mov dword ptr [ebp - 0x18], esi
// 004e792a  c645fc01             mov byte ptr [ebp - 4], 1
// 004e792e  85f6                 test esi, esi
// 004e7930  741b                 je 0x4e794d
// 004e7932  8b4518               mov eax, dword ptr [ebp + 0x18]
// 004e7935  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004e7938  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004e793b  50                   push eax
// 004e793c  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004e793f  51                   push ecx
// 004e7940  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004e7943  52                   push edx
// 004e7944  50                   push eax
// 004e7945  51                   push ecx
// 004e7946  8bce                 mov ecx, esi
// 004e7948  e8a3f6ffff           call 0x4e6ff0
// 004e794d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004e7950  5f                   pop edi
// 004e7951  8bc6                 mov eax, esi
// 004e7953  5e                   pop esi
// 004e7954  64890d00000000       mov dword ptr fs:[0], ecx
// 004e795b  5b                   pop ebx
// 004e795c  8be5                 mov esp, ebp
// 004e795e  5d                   pop ebp
// 004e795f  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
