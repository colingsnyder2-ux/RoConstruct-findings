// roc 2008-06 00507aa0  unit: G3D::Shader  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00507aa0
//
// 00507aa0  53                   push ebx
// 00507aa1  55                   push ebp
// 00507aa2  56                   push esi
// 00507aa3  57                   push edi
// 00507aa4  8bf1                 mov esi, ecx
// 00507aa6  8dbe10280400         lea edi, [esi + 0x42810]
// 00507aac  57                   push edi
// 00507aad  ff15d4228000         call dword ptr [0x8022d4]
// 00507ab3  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00507ab7  ff8628280400         inc dword ptr [esi + 0x42828]
// 00507abd  81fd80000000         cmp ebp, 0x80
// 00507ac3  7732                 ja 0x507af7
// 00507ac5  8b8608280400         mov eax, dword ptr [esi + 0x42808]
// 00507acb  85c0                 test eax, eax
// 00507acd  7e28                 jle 0x507af7
// 00507acf  48                   dec eax
// 00507ad0  898608280400         mov dword ptr [esi + 0x42808], eax
// 00507ad6  8b9c8608400000       mov ebx, dword ptr [esi + eax*4 + 0x4008]
// 00507add  85db                 test ebx, ebx
// 00507adf  7416                 je 0x507af7
// 00507ae1  ff862c280400         inc dword ptr [esi + 0x4282c]
// 00507ae7  57                   push edi
// 00507ae8  ff15f4218000         call dword ptr [0x8021f4]
// 00507aee  5f                   pop edi
// 00507aef  5e                   pop esi
// 00507af0  5d                   pop ebp
// 00507af1  8bc3                 mov eax, ebx
// 00507af3  5b                   pop ebx
// 00507af4  c20400               ret 4
// 00507af7  81fd00040000         cmp ebp, 0x400
// 00507afd  772c                 ja 0x507b2b
// 00507aff  55                   push ebp
// 00507b00  8d8600200000         lea eax, [esi + 0x2000]
// 00507b06  50                   push eax
// 00507b07  56                   push esi
// 00507b08  8bce                 mov ecx, esi
// 00507b0a  e841ffffff           call 0x507a50
// 00507b0f  8bd8                 mov ebx, eax
// 00507b11  85db                 test ebx, ebx
// 00507b13  7450                 je 0x507b65
// 00507b15  ff8630280400         inc dword ptr [esi + 0x42830]
// 00507b1b  57                   push edi
// 00507b1c  ff15f4218000         call dword ptr [0x8021f4]
// 00507b22  5f                   pop edi
// 00507b23  5e                   pop esi
// 00507b24  5d                   pop ebp
// 00507b25  8bc3                 mov eax, ebx
// 00507b27  5b                   pop ebx
// 00507b28  c20400               ret 4
// 00507b2b  81fd00100000         cmp ebp, 0x1000
// 00507b31  7732                 ja 0x507b65
// 00507b33  55                   push ebp
// 00507b34  8d8e04400000         lea ecx, [esi + 0x4004]
// 00507b3a  51                   push ecx
// 00507b3b  8d9604200000         lea edx, [esi + 0x2004]
// 00507b41  52                   push edx
// 00507b42  8bce                 mov ecx, esi
// 00507b44  e807ffffff           call 0x507a50
// 00507b49  8bd8                 mov ebx, eax
// 00507b4b  85db                 test ebx, ebx
// 00507b4d  7416                 je 0x507b65
// 00507b4f  ff8634280400         inc dword ptr [esi + 0x42834]
// 00507b55  57                   push edi
// 00507b56  ff15f4218000         call dword ptr [0x8021f4]
// 00507b5c  5f                   pop edi
// 00507b5d  5e                   pop esi
// 00507b5e  5d                   pop ebp
// 00507b5f  8bc3                 mov eax, ebx
// 00507b61  5b                   pop ebx
// 00507b62  c20400               ret 4
// 00507b65  8d4504               lea eax, [ebp + 4]
// 00507b68  018638280400         add dword ptr [esi + 0x42838], eax
// 00507b6e  57                   push edi
// 00507b6f  ff15f4218000         call dword ptr [0x8021f4]
// 00507b75  8b1db0288000         mov ebx, dword ptr [0x8028b0]
// 00507b7b  8d7d04               lea edi, [ebp + 4]
// 00507b7e  57                   push edi
// 00507b7f  ffd3                 call ebx
// 00507b81  83c404               add esp, 4
// 00507b84  85c0                 test eax, eax
// 00507b86  7567                 jne 0x507bef
// 00507b88  8d8e00200000         lea ecx, [esi + 0x2000]
// 00507b8e  51                   push ecx
// 00507b8f  56                   push esi
// 00507b90  8bce                 mov ecx, esi
// 00507b92  e869feffff           call 0x507a00
// 00507b97  8d9604400000         lea edx, [esi + 0x4004]
// 00507b9d  52                   push edx
// 00507b9e  8d8604200000         lea eax, [esi + 0x2004]
// 00507ba4  50                   push eax
// 00507ba5  8bce                 mov ecx, esi
// 00507ba7  e854feffff           call 0x507a00
// 00507bac  57                   push edi
// 00507bad  ffd3                 call ebx
// 00507baf  83c404               add esp, 4
// 00507bb2  85c0                 test eax, eax
// 00507bb4  7539                 jne 0x507bef
// 00507bb6  a108359700           mov eax, dword ptr [0x973508]
// 00507bbb  85c0                 test eax, eax
// 00507bbd  7427                 je 0x507be6
// 00507bbf  6a01                 push 1
// 00507bc1  57                   push edi
// 00507bc2  ffd0                 call eax
// 00507bc4  83c408               add esp, 8
// 00507bc7  3c01                 cmp al, 1
// 00507bc9  750a                 jne 0x507bd5
// 00507bcb  57                   push edi
// 00507bcc  ffd3                 call ebx
// 00507bce  83c404               add esp, 4
// 00507bd1  85c0                 test eax, eax
// 00507bd3  751a                 jne 0x507bef
// 00507bd5  a108359700           mov eax, dword ptr [0x973508]
// 00507bda  85c0                 test eax, eax
// 00507bdc  7408                 je 0x507be6
// 00507bde  6a00                 push 0
// 00507be0  57                   push edi
// 00507be1  ffd0                 call eax
// 00507be3  83c408               add esp, 8
// 00507be6  5f                   pop edi
// 00507be7  5e                   pop esi
// 00507be8  5d                   pop ebp
// 00507be9  33c0                 xor eax, eax
// 00507beb  5b                   pop ebx
// 00507bec  c20400               ret 4
// 00507bef  5f                   pop edi
// 00507bf0  5e                   pop esi
// 00507bf1  8928                 mov dword ptr [eax], ebp
// 00507bf3  5d                   pop ebp
// 00507bf4  83c004               add eax, 4
// 00507bf7  5b                   pop ebx
// 00507bf8  c20400               ret 4
// library g3d-6.09/G3Dcpp\System.cpp (function ?malloc@BufferPool@G3D@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
