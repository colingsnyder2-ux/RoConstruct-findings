// roc 2007-08 00472c80  unit: G3D::VARArea  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00472c80
//
// 00472c80  6aff                 push -1
// 00472c82  68f4d37400           push 0x74d3f4
// 00472c87  64a100000000         mov eax, dword ptr fs:[0]
// 00472c8d  50                   push eax
// 00472c8e  83ec08               sub esp, 8
// 00472c91  56                   push esi
// 00472c92  57                   push edi
// 00472c93  a188518b00           mov eax, dword ptr [0x8b5188]
// 00472c98  33c4                 xor eax, esp
// 00472c9a  50                   push eax
// 00472c9b  8d442414             lea eax, [esp + 0x14]
// 00472c9f  64a300000000         mov dword ptr fs:[0], eax
// 00472ca5  8bf1                 mov esi, ecx
// 00472ca7  8974240c             mov dword ptr [esp + 0xc], esi
// 00472cab  8b4604               mov eax, dword ptr [esi + 4]
// 00472cae  3b4608               cmp eax, dword ptr [esi + 8]
// 00472cb1  8b0e                 mov ecx, dword ptr [esi]
// 00472cb3  7d3d                 jge 0x472cf2
// 00472cb5  8d0c81               lea ecx, [ecx + eax*4]
// 00472cb8  894c2410             mov dword ptr [esp + 0x10], ecx
// 00472cbc  85c9                 test ecx, ecx
// 00472cbe  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00472cc6  7412                 je 0x472cda
// 00472cc8  8b542424             mov edx, dword ptr [esp + 0x24]
// 00472ccc  c70100000000         mov dword ptr [ecx], 0
// 00472cd2  8b02                 mov eax, dword ptr [edx]
// 00472cd4  50                   push eax
// 00472cd5  e896220000           call 0x474f70
// 00472cda  83460401             add dword ptr [esi + 4], 1
// 00472cde  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00472ce2  64890d00000000       mov dword ptr fs:[0], ecx
// 00472ce9  59                   pop ecx
// 00472cea  5f                   pop edi
// 00472ceb  5e                   pop esi
// 00472cec  83c414               add esp, 0x14
// 00472cef  c20400               ret 4
// 00472cf2  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00472cf6  3bf9                 cmp edi, ecx
// 00472cf8  0f8282000000         jb 0x472d80
// 00472cfe  8d0c81               lea ecx, [ecx + eax*4]
// 00472d01  3bf9                 cmp edi, ecx
// 00472d03  737b                 jae 0x472d80
// 00472d05  8b3f                 mov edi, dword ptr [edi]
// 00472d07  85ff                 test edi, edi
// 00472d09  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00472d11  740e                 je 0x472d21
// 00472d13  8d4704               lea eax, [edi + 4]
// 00472d16  50                   push eax
// 00472d17  897c2428             mov dword ptr [esp + 0x28], edi
// 00472d1b  ff15ecd27700         call dword ptr [0x77d2ec]
// 00472d21  8d542424             lea edx, [esp + 0x24]
// 00472d25  52                   push edx
// 00472d26  8bce                 mov ecx, esi
// 00472d28  c744242001000000     mov dword ptr [esp + 0x20], 1
// 00472d30  e84bffffff           call 0x472c80
// 00472d35  8b442424             mov eax, dword ptr [esp + 0x24]
// 00472d39  85c0                 test eax, eax
// 00472d3b  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00472d43  7459                 je 0x472d9e
// 00472d45  83c004               add eax, 4
// 00472d48  50                   push eax
// 00472d49  ff15e8d27700         call dword ptr [0x77d2e8]
// 00472d4f  85c0                 test eax, eax
// 00472d51  754b                 jne 0x472d9e
// 00472d53  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00472d57  e87450feff           call 0x457dd0
// 00472d5c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00472d60  85c9                 test ecx, ecx
// 00472d62  743a                 je 0x472d9e
// 00472d64  8b01                 mov eax, dword ptr [ecx]
// 00472d66  8b10                 mov edx, dword ptr [eax]
// 00472d68  6a01                 push 1
// 00472d6a  ffd2                 call edx
// 00472d6c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00472d70  64890d00000000       mov dword ptr fs:[0], ecx
// 00472d77  59                   pop ecx
// 00472d78  5f                   pop edi
// 00472d79  5e                   pop esi
// 00472d7a  83c414               add esp, 0x14
// 00472d7d  c20400               ret 4
// 00472d80  6a00                 push 0
// 00472d82  83c001               add eax, 1
// 00472d85  50                   push eax
// 00472d86  8bce                 mov ecx, esi
// 00472d88  e843fdffff           call 0x472ad0
// 00472d8d  8b07                 mov eax, dword ptr [edi]
// 00472d8f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00472d92  8b16                 mov edx, dword ptr [esi]
// 00472d94  50                   push eax
// 00472d95  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 00472d99  e8d2210000           call 0x474f70
// 00472d9e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00472da2  64890d00000000       mov dword ptr fs:[0], ecx
// 00472da9  59                   pop ecx
// 00472daa  5f                   pop edi
// 00472dab  5e                   pop esi
// 00472dac  83c414               add esp, 0x14
// 00472daf  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?append@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXABV?$ReferenceCountedPointer@VGModule@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
