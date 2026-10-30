// roc 2009-12 0086e3e0  unit: CXTPResourceManager  size: 353 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086e3e0
//
// 0086e3e0  51                   push ecx
// 0086e3e1  8b542408             mov edx, dword ptr [esp + 8]
// 0086e3e5  890c24               mov dword ptr [esp], ecx
// 0086e3e8  85d2                 test edx, edx
// 0086e3ea  0f844b010000         je 0x86e53b
// 0086e3f0  8b4204               mov eax, dword ptr [edx + 4]
// 0086e3f3  85c0                 test eax, eax
// 0086e3f5  0f8440010000         je 0x86e53b
// 0086e3fb  83790c00             cmp dword ptr [ecx + 0xc], 0
// 0086e3ff  751a                 jne 0x86e41b
// 0086e401  8b442414             mov eax, dword ptr [esp + 0x14]
// 0086e405  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086e409  50                   push eax
// 0086e40a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086e40e  51                   push ecx
// 0086e40f  50                   push eax
// 0086e410  8bca                 mov ecx, edx
// 0086e412  e8b5830b00           call 0x9267cc
// 0086e417  59                   pop ecx
// 0086e418  c21000               ret 0x10
// 0086e41b  53                   push ebx
// 0086e41c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0086e420  55                   push ebp
// 0086e421  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0086e425  56                   push esi
// 0086e426  57                   push edi
// 0086e427  53                   push ebx
// 0086e428  6a00                 push 0
// 0086e42a  6a00                 push 0
// 0086e42c  55                   push ebp
// 0086e42d  50                   push eax
// 0086e42e  ff1580cb9800         call dword ptr [0x98cb80]
// 0086e434  8bf0                 mov esi, eax
// 0086e436  85f6                 test esi, esi
// 0086e438  0f8ee9000000         jle 0x86e527
// 0086e43e  e8ddd2fcff           call 0x83b720
// 0086e443  8bc8                 mov ecx, eax
// 0086e445  e836d3fcff           call 0x83b780
// 0086e44a  84c0                 test al, al
// 0086e44c  0f84a0000000         je 0x86e4f2
// 0086e452  33c9                 xor ecx, ecx
// 0086e454  8d6e01               lea ebp, [esi + 1]
// 0086e457  8bc5                 mov eax, ebp
// 0086e459  ba02000000           mov edx, 2
// 0086e45e  f7e2                 mul edx
// 0086e460  0f90c1               seto cl
// 0086e463  f7d9                 neg ecx
// 0086e465  0bc8                 or ecx, eax
// 0086e467  51                   push ecx
// 0086e468  e8d556f8ff           call 0x7f3b42
// 0086e46d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0086e471  8b5104               mov edx, dword ptr [ecx + 4]
// 0086e474  83c404               add esp, 4
// 0086e477  53                   push ebx
// 0086e478  55                   push ebp
// 0086e479  8bf8                 mov edi, eax
// 0086e47b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0086e47f  57                   push edi
// 0086e480  50                   push eax
// 0086e481  52                   push edx
// 0086e482  ff157ccb9800         call dword ptr [0x98cb7c]
// 0086e488  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086e48c  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0086e48f  8b5104               mov edx, dword ptr [ecx + 4]
// 0086e492  6a00                 push 0
// 0086e494  6a00                 push 0
// 0086e496  6a00                 push 0
// 0086e498  6a00                 push 0
// 0086e49a  56                   push esi
// 0086e49b  57                   push edi
// 0086e49c  6a00                 push 0
// 0086e49e  52                   push edx
// 0086e49f  ff153cb29800         call dword ptr [0x98b23c]
// 0086e4a5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0086e4a9  8bd8                 mov ebx, eax
// 0086e4ab  53                   push ebx
// 0086e4ac  ff15ecce9800         call dword ptr [0x98ceec]
// 0086e4b2  6a00                 push 0
// 0086e4b4  6a00                 push 0
// 0086e4b6  53                   push ebx
// 0086e4b7  8be8                 mov ebp, eax
// 0086e4b9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0086e4bd  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0086e4c0  8b5104               mov edx, dword ptr [ecx + 4]
// 0086e4c3  55                   push ebp
// 0086e4c4  56                   push esi
// 0086e4c5  57                   push edi
// 0086e4c6  6a00                 push 0
// 0086e4c8  52                   push edx
// 0086e4c9  ff153cb29800         call dword ptr [0x98b23c]
// 0086e4cf  57                   push edi
// 0086e4d0  c6042b00             mov byte ptr [ebx + ebp], 0
// 0086e4d4  e82d56f8ff           call 0x7f3b06
// 0086e4d9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0086e4dd  83c404               add esp, 4
// 0086e4e0  6aff                 push -1
// 0086e4e2  ff1560d29800         call dword ptr [0x98d260]
// 0086e4e8  5f                   pop edi
// 0086e4e9  8bc6                 mov eax, esi
// 0086e4eb  5e                   pop esi
// 0086e4ec  5d                   pop ebp
// 0086e4ed  5b                   pop ebx
// 0086e4ee  59                   pop ecx
// 0086e4ef  c21000               ret 0x10
// 0086e4f2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0086e4f6  56                   push esi
// 0086e4f7  8bcf                 mov ecx, edi
// 0086e4f9  ff15ecce9800         call dword ptr [0x98ceec]
// 0086e4ff  8b542418             mov edx, dword ptr [esp + 0x18]
// 0086e503  53                   push ebx
// 0086e504  8d4e01               lea ecx, [esi + 1]
// 0086e507  51                   push ecx
// 0086e508  50                   push eax
// 0086e509  8b4204               mov eax, dword ptr [edx + 4]
// 0086e50c  55                   push ebp
// 0086e50d  50                   push eax
// 0086e50e  ff1580cb9800         call dword ptr [0x98cb80]
// 0086e514  56                   push esi
// 0086e515  8bcf                 mov ecx, edi
// 0086e517  ff1560d29800         call dword ptr [0x98d260]
// 0086e51d  5f                   pop edi
// 0086e51e  8bc6                 mov eax, esi
// 0086e520  5e                   pop esi
// 0086e521  5d                   pop ebp
// 0086e522  5b                   pop ebx
// 0086e523  59                   pop ecx
// 0086e524  c21000               ret 0x10
// 0086e527  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0086e52b  ff1590d69800         call dword ptr [0x98d690]
// 0086e531  5f                   pop edi
// 0086e532  8bc6                 mov eax, esi
// 0086e534  5e                   pop esi
// 0086e535  5d                   pop ebp
// 0086e536  5b                   pop ebx
// 0086e537  59                   pop ecx
// 0086e538  c21000               ret 0x10
// 0086e53b  33c0                 xor eax, eax
// 0086e53d  59                   pop ecx
// 0086e53e  c21000               ret 0x10
// copied from an identical function in another client (function ?GetMenuLocaleString@CXTPResourceManager@@QBEHPAVCMenu@@IAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPResourceManager.cpp