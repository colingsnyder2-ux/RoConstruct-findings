// roc 2012-06 009f8030  unit: CXTPResourceManager  size: 353 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f8030
//
// 009f8030  51                   push ecx
// 009f8031  8b542408             mov edx, dword ptr [esp + 8]
// 009f8035  890c24               mov dword ptr [esp], ecx
// 009f8038  85d2                 test edx, edx
// 009f803a  0f844b010000         je 0x9f818b
// 009f8040  8b4204               mov eax, dword ptr [edx + 4]
// 009f8043  85c0                 test eax, eax
// 009f8045  0f8440010000         je 0x9f818b
// 009f804b  83790c00             cmp dword ptr [ecx + 0xc], 0
// 009f804f  751a                 jne 0x9f806b
// 009f8051  8b442414             mov eax, dword ptr [esp + 0x14]
// 009f8055  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009f8059  50                   push eax
// 009f805a  8b442410             mov eax, dword ptr [esp + 0x10]
// 009f805e  51                   push ecx
// 009f805f  50                   push eax
// 009f8060  8bca                 mov ecx, edx
// 009f8062  e85f180a00           call 0xa998c6
// 009f8067  59                   pop ecx
// 009f8068  c21000               ret 0x10
// 009f806b  53                   push ebx
// 009f806c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 009f8070  55                   push ebp
// 009f8071  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 009f8075  56                   push esi
// 009f8076  57                   push edi
// 009f8077  53                   push ebx
// 009f8078  6a00                 push 0
// 009f807a  6a00                 push 0
// 009f807c  55                   push ebp
// 009f807d  50                   push eax
// 009f807e  ff156c3cb200         call dword ptr [0xb23c6c]
// 009f8084  8bf0                 mov esi, eax
// 009f8086  85f6                 test esi, esi
// 009f8088  0f8ee9000000         jle 0x9f8177
// 009f808e  e8fd14fdff           call 0x9c9590
// 009f8093  8bc8                 mov ecx, eax
// 009f8095  e85615fdff           call 0x9c95f0
// 009f809a  84c0                 test al, al
// 009f809c  0f84a0000000         je 0x9f8142
// 009f80a2  33c9                 xor ecx, ecx
// 009f80a4  8d6e01               lea ebp, [esi + 1]
// 009f80a7  8bc5                 mov eax, ebp
// 009f80a9  ba02000000           mov edx, 2
// 009f80ae  f7e2                 mul edx
// 009f80b0  0f90c1               seto cl
// 009f80b3  f7d9                 neg ecx
// 009f80b5  0bc8                 or ecx, eax
// 009f80b7  51                   push ecx
// 009f80b8  e833a3f8ff           call 0x9823f0
// 009f80bd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009f80c1  8b5104               mov edx, dword ptr [ecx + 4]
// 009f80c4  83c404               add esp, 4
// 009f80c7  53                   push ebx
// 009f80c8  55                   push ebp
// 009f80c9  8bf8                 mov edi, eax
// 009f80cb  8b442424             mov eax, dword ptr [esp + 0x24]
// 009f80cf  57                   push edi
// 009f80d0  50                   push eax
// 009f80d1  52                   push edx
// 009f80d2  ff15703cb200         call dword ptr [0xb23c70]
// 009f80d8  8b442410             mov eax, dword ptr [esp + 0x10]
// 009f80dc  8b480c               mov ecx, dword ptr [eax + 0xc]
// 009f80df  8b5104               mov edx, dword ptr [ecx + 4]
// 009f80e2  6a00                 push 0
// 009f80e4  6a00                 push 0
// 009f80e6  6a00                 push 0
// 009f80e8  6a00                 push 0
// 009f80ea  56                   push esi
// 009f80eb  57                   push edi
// 009f80ec  6a00                 push 0
// 009f80ee  52                   push edx
// 009f80ef  ff15c821b200         call dword ptr [0xb221c8]
// 009f80f5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009f80f9  8bd8                 mov ebx, eax
// 009f80fb  53                   push ebx
// 009f80fc  ff159450b200         call dword ptr [0xb25094]
// 009f8102  6a00                 push 0
// 009f8104  6a00                 push 0
// 009f8106  53                   push ebx
// 009f8107  8be8                 mov ebp, eax
// 009f8109  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009f810d  8b480c               mov ecx, dword ptr [eax + 0xc]
// 009f8110  8b5104               mov edx, dword ptr [ecx + 4]
// 009f8113  55                   push ebp
// 009f8114  56                   push esi
// 009f8115  57                   push edi
// 009f8116  6a00                 push 0
// 009f8118  52                   push edx
// 009f8119  ff15c821b200         call dword ptr [0xb221c8]
// 009f811f  57                   push edi
// 009f8120  c6042b00             mov byte ptr [ebx + ebp], 0
// 009f8124  e891a2f8ff           call 0x9823ba
// 009f8129  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009f812d  83c404               add esp, 4
// 009f8130  6aff                 push -1
// 009f8132  ff15b043b200         call dword ptr [0xb243b0]
// 009f8138  5f                   pop edi
// 009f8139  8bc6                 mov eax, esi
// 009f813b  5e                   pop esi
// 009f813c  5d                   pop ebp
// 009f813d  5b                   pop ebx
// 009f813e  59                   pop ecx
// 009f813f  c21000               ret 0x10
// 009f8142  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 009f8146  56                   push esi
// 009f8147  8bcf                 mov ecx, edi
// 009f8149  ff159450b200         call dword ptr [0xb25094]
// 009f814f  8b542418             mov edx, dword ptr [esp + 0x18]
// 009f8153  53                   push ebx
// 009f8154  8d4e01               lea ecx, [esi + 1]
// 009f8157  51                   push ecx
// 009f8158  50                   push eax
// 009f8159  8b4204               mov eax, dword ptr [edx + 4]
// 009f815c  55                   push ebp
// 009f815d  50                   push eax
// 009f815e  ff156c3cb200         call dword ptr [0xb23c6c]
// 009f8164  56                   push esi
// 009f8165  8bcf                 mov ecx, edi
// 009f8167  ff15b043b200         call dword ptr [0xb243b0]
// 009f816d  5f                   pop edi
// 009f816e  8bc6                 mov eax, esi
// 009f8170  5e                   pop esi
// 009f8171  5d                   pop ebp
// 009f8172  5b                   pop ebx
// 009f8173  59                   pop ecx
// 009f8174  c21000               ret 0x10
// 009f8177  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009f817b  ff150448b200         call dword ptr [0xb24804]
// 009f8181  5f                   pop edi
// 009f8182  8bc6                 mov eax, esi
// 009f8184  5e                   pop esi
// 009f8185  5d                   pop ebp
// 009f8186  5b                   pop ebx
// 009f8187  59                   pop ecx
// 009f8188  c21000               ret 0x10
// 009f818b  33c0                 xor eax, eax
// 009f818d  59                   pop ecx
// 009f818e  c21000               ret 0x10
// library xtp-15.2.1-shared-mfc/Source\Common\XTPResourceManager.cpp (function ?GetMenuLocaleString@CXTPResourceManager@@QBEHPAVCMenu@@IAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPResourceManager.cpp
