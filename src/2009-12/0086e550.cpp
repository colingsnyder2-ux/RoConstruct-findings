// roc 2009-12 0086e550  unit: CXTPResourceManager  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086e550
//
// 0086e550  51                   push ecx
// 0086e551  53                   push ebx
// 0086e552  55                   push ebp
// 0086e553  894c2408             mov dword ptr [esp + 8], ecx
// 0086e557  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0086e55b  57                   push edi
// 0086e55c  ff1590d69800         call dword ptr [0x98d690]
// 0086e562  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0086e566  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0086e56a  8bc3                 mov eax, ebx
// 0086e56c  c1e804               shr eax, 4
// 0086e56f  40                   inc eax
// 0086e570  0fb7c8               movzx ecx, ax
// 0086e573  6a06                 push 6
// 0086e575  51                   push ecx
// 0086e576  55                   push ebp
// 0086e577  ff15ecb19800         call dword ptr [0x98b1ec]
// 0086e57d  8bf8                 mov edi, eax
// 0086e57f  85ff                 test edi, edi
// 0086e581  7509                 jne 0x86e58c
// 0086e583  5f                   pop edi
// 0086e584  5d                   pop ebp
// 0086e585  33c0                 xor eax, eax
// 0086e587  5b                   pop ebx
// 0086e588  59                   pop ecx
// 0086e589  c20c00               ret 0xc
// 0086e58c  57                   push edi
// 0086e58d  55                   push ebp
// 0086e58e  ff15f0b19800         call dword ptr [0x98b1f0]
// 0086e594  85c0                 test eax, eax
// 0086e596  74eb                 je 0x86e583
// 0086e598  56                   push esi
// 0086e599  50                   push eax
// 0086e59a  ff157cb29800         call dword ptr [0x98b27c]
// 0086e5a0  8bf0                 mov esi, eax
// 0086e5a2  85f6                 test esi, esi
// 0086e5a4  742a                 je 0x86e5d0
// 0086e5a6  57                   push edi
// 0086e5a7  55                   push ebp
// 0086e5a8  ff15f4b19800         call dword ptr [0x98b1f4]
// 0086e5ae  03c6                 add eax, esi
// 0086e5b0  83e30f               and ebx, 0xf
// 0086e5b3  7610                 jbe 0x86e5c5
// 0086e5b5  3bf0                 cmp esi, eax
// 0086e5b7  7317                 jae 0x86e5d0
// 0086e5b9  83eb01               sub ebx, 1
// 0086e5bc  0fb716               movzx edx, word ptr [esi]
// 0086e5bf  8d745602             lea esi, [esi + edx*2 + 2]
// 0086e5c3  75f0                 jne 0x86e5b5
// 0086e5c5  3bf0                 cmp esi, eax
// 0086e5c7  7307                 jae 0x86e5d0
// 0086e5c9  0fb72e               movzx ebp, word ptr [esi]
// 0086e5cc  85ed                 test ebp, ebp
// 0086e5ce  750a                 jne 0x86e5da
// 0086e5d0  5e                   pop esi
// 0086e5d1  5f                   pop edi
// 0086e5d2  5d                   pop ebp
// 0086e5d3  33c0                 xor eax, eax
// 0086e5d5  5b                   pop ebx
// 0086e5d6  59                   pop ecx
// 0086e5d7  c20c00               ret 0xc
// 0086e5da  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086e5de  8b400c               mov eax, dword ptr [eax + 0xc]
// 0086e5e1  85c0                 test eax, eax
// 0086e5e3  7405                 je 0x86e5ea
// 0086e5e5  8b5804               mov ebx, dword ptr [eax + 4]
// 0086e5e8  eb02                 jmp 0x86e5ec
// 0086e5ea  33db                 xor ebx, ebx
// 0086e5ec  6a00                 push 0
// 0086e5ee  6a00                 push 0
// 0086e5f0  6a00                 push 0
// 0086e5f2  6a00                 push 0
// 0086e5f4  55                   push ebp
// 0086e5f5  8d7e02               lea edi, [esi + 2]
// 0086e5f8  57                   push edi
// 0086e5f9  6a00                 push 0
// 0086e5fb  53                   push ebx
// 0086e5fc  ff153cb29800         call dword ptr [0x98b23c]
// 0086e602  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0086e606  8bf0                 mov esi, eax
// 0086e608  56                   push esi
// 0086e609  ff15ecce9800         call dword ptr [0x98ceec]
// 0086e60f  6a00                 push 0
// 0086e611  6a00                 push 0
// 0086e613  56                   push esi
// 0086e614  50                   push eax
// 0086e615  55                   push ebp
// 0086e616  57                   push edi
// 0086e617  6a00                 push 0
// 0086e619  53                   push ebx
// 0086e61a  ff153cb29800         call dword ptr [0x98b23c]
// 0086e620  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0086e624  56                   push esi
// 0086e625  ff1560d29800         call dword ptr [0x98d260]
// 0086e62b  8bc6                 mov eax, esi
// 0086e62d  5e                   pop esi
// 0086e62e  5f                   pop edi
// 0086e62f  5d                   pop ebp
// 0086e630  5b                   pop ebx
// 0086e631  59                   pop ecx
// 0086e632  c20c00               ret 0xc
// copied from an identical function in another client (function ?LoadLocaleString@CXTPResourceManager@@QBEHPAUHINSTANCE__@@IAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPResourceManager.cpp