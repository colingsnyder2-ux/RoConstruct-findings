// from server: 100% by auto
// roc 2007-08 005b3e30  unit: RBX::Assembly  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3e30
//
// 005b3e30  83ec08               sub esp, 8
// 005b3e33  53                   push ebx
// 005b3e34  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005b3e38  55                   push ebp
// 005b3e39  56                   push esi
// 005b3e3a  57                   push edi
// 005b3e3b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005b3e3f  8bc7                 mov eax, edi
// 005b3e41  2bc3                 sub eax, ebx
// 005b3e43  c1f802               sar eax, 2
// 005b3e46  83f820               cmp eax, 0x20
// 005b3e49  7e7c                 jle 0x5b3ec7
// 005b3e4b  8b742424             mov esi, dword ptr [esp + 0x24]
// 005b3e4f  90                   nop 
// 005b3e50  85f6                 test esi, esi
// 005b3e52  0f8e8b000000         jle 0x5b3ee3
// 005b3e58  8b442428             mov eax, dword ptr [esp + 0x28]
// 005b3e5c  50                   push eax
// 005b3e5d  57                   push edi
// 005b3e5e  8d4c2418             lea ecx, [esp + 0x18]
// 005b3e62  53                   push ebx
// 005b3e63  51                   push ecx
// 005b3e64  e8c7f8ffff           call 0x5b3730
// 005b3e69  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005b3e6d  8bc6                 mov eax, esi
// 005b3e6f  99                   cdq 
// 005b3e70  2bc2                 sub eax, edx
// 005b3e72  d1f8                 sar eax, 1
// 005b3e74  8bf0                 mov esi, eax
// 005b3e76  99                   cdq 
// 005b3e77  2bc2                 sub eax, edx
// 005b3e79  d1f8                 sar eax, 1
// 005b3e7b  03f0                 add esi, eax
// 005b3e7d  8b442420             mov eax, dword ptr [esp + 0x20]
// 005b3e81  8bd7                 mov edx, edi
// 005b3e83  8bc8                 mov ecx, eax
// 005b3e85  2bd5                 sub edx, ebp
// 005b3e87  2bcb                 sub ecx, ebx
// 005b3e89  83e2fc               and edx, 0xfffffffc
// 005b3e8c  83e1fc               and ecx, 0xfffffffc
// 005b3e8f  83c410               add esp, 0x10
// 005b3e92  3bca                 cmp ecx, edx
// 005b3e94  7d11                 jge 0x5b3ea7
// 005b3e96  8b542428             mov edx, dword ptr [esp + 0x28]
// 005b3e9a  52                   push edx
// 005b3e9b  56                   push esi
// 005b3e9c  50                   push eax
// 005b3e9d  53                   push ebx
// 005b3e9e  e88dffffff           call 0x5b3e30
// 005b3ea3  8bdd                 mov ebx, ebp
// 005b3ea5  eb11                 jmp 0x5b3eb8
// 005b3ea7  8b442428             mov eax, dword ptr [esp + 0x28]
// 005b3eab  50                   push eax
// 005b3eac  56                   push esi
// 005b3ead  57                   push edi
// 005b3eae  55                   push ebp
// 005b3eaf  e87cffffff           call 0x5b3e30
// 005b3eb4  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005b3eb8  8bc7                 mov eax, edi
// 005b3eba  2bc3                 sub eax, ebx
// 005b3ebc  c1f802               sar eax, 2
// 005b3ebf  83c410               add esp, 0x10
// 005b3ec2  83f820               cmp eax, 0x20
// 005b3ec5  7f89                 jg 0x5b3e50
// 005b3ec7  83f801               cmp eax, 1
// 005b3eca  7e0f                 jle 0x5b3edb
// 005b3ecc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b3ed0  51                   push ecx
// 005b3ed1  57                   push edi
// 005b3ed2  53                   push ebx
// 005b3ed3  e8f8f9ffff           call 0x5b38d0
// 005b3ed8  83c40c               add esp, 0xc
// 005b3edb  5f                   pop edi
// 005b3edc  5e                   pop esi
// 005b3edd  5d                   pop ebp
// 005b3ede  5b                   pop ebx
// 005b3edf  83c408               add esp, 8
// 005b3ee2  c3                   ret 
// 005b3ee3  83f820               cmp eax, 0x20
// 005b3ee6  7edf                 jle 0x5b3ec7
// 005b3ee8  8bcf                 mov ecx, edi
// 005b3eea  2bcb                 sub ecx, ebx
// 005b3eec  83e1fc               and ecx, 0xfffffffc
// 005b3eef  83f904               cmp ecx, 4
// 005b3ef2  7e13                 jle 0x5b3f07
// 005b3ef4  8b542428             mov edx, dword ptr [esp + 0x28]
// 005b3ef8  6a00                 push 0
// 005b3efa  6a00                 push 0
// 005b3efc  52                   push edx
// 005b3efd  57                   push edi
// 005b3efe  53                   push ebx
// 005b3eff  e8ccf4ffff           call 0x5b33d0
// 005b3f04  83c414               add esp, 0x14
// 005b3f07  8b442428             mov eax, dword ptr [esp + 0x28]
// 005b3f0b  50                   push eax
// 005b3f0c  57                   push edi
// 005b3f0d  53                   push ebx
// 005b3f0e  e81dfcffff           call 0x5b3b30
// 005b3f13  83c40c               add esp, 0xc
// 005b3f16  5f                   pop edi
// 005b3f17  5e                   pop esi
// 005b3f18  5d                   pop ebp
// 005b3f19  5b                   pop ebx
// 005b3f1a  83c408               add esp, 8
// 005b3f1d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Sort@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@HP6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@0HP6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
