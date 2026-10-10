// from server: 100% by tester
// roc 2007-03 00472d70  unit: seg_00470000  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00472d70
//
// 00472d70  6aff                 push -1
// 00472d72  68c4e27400           push 0x74e2c4
// 00472d77  64a100000000         mov eax, dword ptr fs:[0]
// 00472d7d  50                   push eax
// 00472d7e  83ec08               sub esp, 8
// 00472d81  56                   push esi
// 00472d82  57                   push edi
// 00472d83  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00472d88  33c4                 xor eax, esp
// 00472d8a  50                   push eax
// 00472d8b  8d442414             lea eax, [esp + 0x14]
// 00472d8f  64a300000000         mov dword ptr fs:[0], eax
// 00472d95  8bf1                 mov esi, ecx
// 00472d97  8974240c             mov dword ptr [esp + 0xc], esi
// 00472d9b  8b4604               mov eax, dword ptr [esi + 4]
// 00472d9e  3b4608               cmp eax, dword ptr [esi + 8]
// 00472da1  8b0e                 mov ecx, dword ptr [esi]
// 00472da3  7d3d                 jge 0x472de2
// 00472da5  8d0c81               lea ecx, [ecx + eax*4]
// 00472da8  894c2410             mov dword ptr [esp + 0x10], ecx
// 00472dac  85c9                 test ecx, ecx
// 00472dae  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00472db6  7412                 je 0x472dca
// 00472db8  8b542424             mov edx, dword ptr [esp + 0x24]
// 00472dbc  c70100000000         mov dword ptr [ecx], 0
// 00472dc2  8b02                 mov eax, dword ptr [edx]
// 00472dc4  50                   push eax
// 00472dc5  e8c6220000           call 0x475090
// 00472dca  83460401             add dword ptr [esi + 4], 1
// 00472dce  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00472dd2  64890d00000000       mov dword ptr fs:[0], ecx
// 00472dd9  59                   pop ecx
// 00472dda  5f                   pop edi
// 00472ddb  5e                   pop esi
// 00472ddc  83c414               add esp, 0x14
// 00472ddf  c20400               ret 4
// 00472de2  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00472de6  3bf9                 cmp edi, ecx
// 00472de8  0f8282000000         jb 0x472e70
// 00472dee  8d0c81               lea ecx, [ecx + eax*4]
// 00472df1  3bf9                 cmp edi, ecx
// 00472df3  737b                 jae 0x472e70
// 00472df5  8b3f                 mov edi, dword ptr [edi]
// 00472df7  85ff                 test edi, edi
// 00472df9  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00472e01  740e                 je 0x472e11
// 00472e03  8d4704               lea eax, [edi + 4]
// 00472e06  50                   push eax
// 00472e07  897c2428             mov dword ptr [esp + 0x28], edi
// 00472e0b  ff15acd27700         call dword ptr [0x77d2ac]
// 00472e11  8d542424             lea edx, [esp + 0x24]
// 00472e15  52                   push edx
// 00472e16  8bce                 mov ecx, esi
// 00472e18  c744242001000000     mov dword ptr [esp + 0x20], 1
// 00472e20  e84bffffff           call 0x472d70
// 00472e25  8b442424             mov eax, dword ptr [esp + 0x24]
// 00472e29  85c0                 test eax, eax
// 00472e2b  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00472e33  7459                 je 0x472e8e
// 00472e35  83c004               add eax, 4
// 00472e38  50                   push eax
// 00472e39  ff15a8d27700         call dword ptr [0x77d2a8]
// 00472e3f  85c0                 test eax, eax
// 00472e41  754b                 jne 0x472e8e
// 00472e43  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00472e47  e87405ffff           call 0x4633c0
// 00472e4c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00472e50  85c9                 test ecx, ecx
// 00472e52  743a                 je 0x472e8e
// 00472e54  8b01                 mov eax, dword ptr [ecx]
// 00472e56  8b10                 mov edx, dword ptr [eax]
// 00472e58  6a01                 push 1
// 00472e5a  ffd2                 call edx
// 00472e5c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00472e60  64890d00000000       mov dword ptr fs:[0], ecx
// 00472e67  59                   pop ecx
// 00472e68  5f                   pop edi
// 00472e69  5e                   pop esi
// 00472e6a  83c414               add esp, 0x14
// 00472e6d  c20400               ret 4
// 00472e70  6a00                 push 0
// 00472e72  83c001               add eax, 1
// 00472e75  50                   push eax
// 00472e76  8bce                 mov ecx, esi
// 00472e78  e843fdffff           call 0x472bc0
// 00472e7d  8b07                 mov eax, dword ptr [edi]
// 00472e7f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00472e82  8b16                 mov edx, dword ptr [esi]
// 00472e84  50                   push eax
// 00472e85  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 00472e89  e802220000           call 0x475090
// 00472e8e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00472e92  64890d00000000       mov dword ptr fs:[0], ecx
// 00472e99  59                   pop ecx
// 00472e9a  5f                   pop edi
// 00472e9b  5e                   pop esi
// 00472e9c  83c414               add esp, 0x14
// 00472e9f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?append@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXABV?$ReferenceCountedPointer@VGModule@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
