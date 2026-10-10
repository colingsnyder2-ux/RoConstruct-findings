// roc 2012-06 009f81a0  unit: CXTPResourceManager  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f81a0
//
// 009f81a0  51                   push ecx
// 009f81a1  53                   push ebx
// 009f81a2  55                   push ebp
// 009f81a3  894c2408             mov dword ptr [esp + 8], ecx
// 009f81a7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009f81ab  57                   push edi
// 009f81ac  ff150448b200         call dword ptr [0xb24804]
// 009f81b2  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 009f81b6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 009f81ba  8bc3                 mov eax, ebx
// 009f81bc  c1e804               shr eax, 4
// 009f81bf  40                   inc eax
// 009f81c0  0fb7c8               movzx ecx, ax
// 009f81c3  6a06                 push 6
// 009f81c5  51                   push ecx
// 009f81c6  55                   push ebp
// 009f81c7  ff154022b200         call dword ptr [0xb22240]
// 009f81cd  8bf8                 mov edi, eax
// 009f81cf  85ff                 test edi, edi
// 009f81d1  7509                 jne 0x9f81dc
// 009f81d3  5f                   pop edi
// 009f81d4  5d                   pop ebp
// 009f81d5  33c0                 xor eax, eax
// 009f81d7  5b                   pop ebx
// 009f81d8  59                   pop ecx
// 009f81d9  c20c00               ret 0xc
// 009f81dc  57                   push edi
// 009f81dd  55                   push ebp
// 009f81de  ff158421b200         call dword ptr [0xb22184]
// 009f81e4  85c0                 test eax, eax
// 009f81e6  74eb                 je 0x9f81d3
// 009f81e8  56                   push esi
// 009f81e9  50                   push eax
// 009f81ea  ff15d422b200         call dword ptr [0xb222d4]
// 009f81f0  8bf0                 mov esi, eax
// 009f81f2  85f6                 test esi, esi
// 009f81f4  742a                 je 0x9f8220
// 009f81f6  57                   push edi
// 009f81f7  55                   push ebp
// 009f81f8  ff158821b200         call dword ptr [0xb22188]
// 009f81fe  03c6                 add eax, esi
// 009f8200  83e30f               and ebx, 0xf
// 009f8203  7610                 jbe 0x9f8215
// 009f8205  3bf0                 cmp esi, eax
// 009f8207  7317                 jae 0x9f8220
// 009f8209  83eb01               sub ebx, 1
// 009f820c  0fb716               movzx edx, word ptr [esi]
// 009f820f  8d745602             lea esi, [esi + edx*2 + 2]
// 009f8213  75f0                 jne 0x9f8205
// 009f8215  3bf0                 cmp esi, eax
// 009f8217  7307                 jae 0x9f8220
// 009f8219  0fb72e               movzx ebp, word ptr [esi]
// 009f821c  85ed                 test ebp, ebp
// 009f821e  750a                 jne 0x9f822a
// 009f8220  5e                   pop esi
// 009f8221  5f                   pop edi
// 009f8222  5d                   pop ebp
// 009f8223  33c0                 xor eax, eax
// 009f8225  5b                   pop ebx
// 009f8226  59                   pop ecx
// 009f8227  c20c00               ret 0xc
// 009f822a  8b442410             mov eax, dword ptr [esp + 0x10]
// 009f822e  8b400c               mov eax, dword ptr [eax + 0xc]
// 009f8231  85c0                 test eax, eax
// 009f8233  7405                 je 0x9f823a
// 009f8235  8b5804               mov ebx, dword ptr [eax + 4]
// 009f8238  eb02                 jmp 0x9f823c
// 009f823a  33db                 xor ebx, ebx
// 009f823c  6a00                 push 0
// 009f823e  6a00                 push 0
// 009f8240  6a00                 push 0
// 009f8242  6a00                 push 0
// 009f8244  55                   push ebp
// 009f8245  8d7e02               lea edi, [esi + 2]
// 009f8248  57                   push edi
// 009f8249  6a00                 push 0
// 009f824b  53                   push ebx
// 009f824c  ff15c821b200         call dword ptr [0xb221c8]
// 009f8252  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009f8256  8bf0                 mov esi, eax
// 009f8258  56                   push esi
// 009f8259  ff159450b200         call dword ptr [0xb25094]
// 009f825f  6a00                 push 0
// 009f8261  6a00                 push 0
// 009f8263  56                   push esi
// 009f8264  50                   push eax
// 009f8265  55                   push ebp
// 009f8266  57                   push edi
// 009f8267  6a00                 push 0
// 009f8269  53                   push ebx
// 009f826a  ff15c821b200         call dword ptr [0xb221c8]
// 009f8270  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009f8274  56                   push esi
// 009f8275  ff15b043b200         call dword ptr [0xb243b0]
// 009f827b  8bc6                 mov eax, esi
// 009f827d  5e                   pop esi
// 009f827e  5f                   pop edi
// 009f827f  5d                   pop ebp
// 009f8280  5b                   pop ebx
// 009f8281  59                   pop ecx
// 009f8282  c20c00               ret 0xc
// library xtp-15.2.1-shared-mfc/Source\Common\XTPResourceManager.cpp (function ?LoadLocaleString@CXTPResourceManager@@QBEHPAUHINSTANCE__@@IAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPResourceManager.cpp
