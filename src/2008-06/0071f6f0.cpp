// roc 2008-06 0071f6f0  unit: CXTPResourceManager  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f6f0
//
// 0071f6f0  51                   push ecx
// 0071f6f1  53                   push ebx
// 0071f6f2  55                   push ebp
// 0071f6f3  894c2408             mov dword ptr [esp + 8], ecx
// 0071f6f7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0071f6fb  57                   push edi
// 0071f6fc  ff15843e8000         call dword ptr [0x803e84]
// 0071f702  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0071f706  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0071f70a  8bc3                 mov eax, ebx
// 0071f70c  c1e804               shr eax, 4
// 0071f70f  40                   inc eax
// 0071f710  0fb7c8               movzx ecx, ax
// 0071f713  6a06                 push 6
// 0071f715  51                   push ecx
// 0071f716  55                   push ebp
// 0071f717  ff1590218000         call dword ptr [0x802190]
// 0071f71d  8bf8                 mov edi, eax
// 0071f71f  85ff                 test edi, edi
// 0071f721  7509                 jne 0x71f72c
// 0071f723  5f                   pop edi
// 0071f724  5d                   pop ebp
// 0071f725  33c0                 xor eax, eax
// 0071f727  5b                   pop ebx
// 0071f728  59                   pop ecx
// 0071f729  c20c00               ret 0xc
// 0071f72c  57                   push edi
// 0071f72d  55                   push ebp
// 0071f72e  ff15a8218000         call dword ptr [0x8021a8]
// 0071f734  85c0                 test eax, eax
// 0071f736  74eb                 je 0x71f723
// 0071f738  56                   push esi
// 0071f739  50                   push eax
// 0071f73a  ff1510228000         call dword ptr [0x802210]
// 0071f740  8bf0                 mov esi, eax
// 0071f742  85f6                 test esi, esi
// 0071f744  742a                 je 0x71f770
// 0071f746  57                   push edi
// 0071f747  55                   push ebp
// 0071f748  ff15c8218000         call dword ptr [0x8021c8]
// 0071f74e  03c6                 add eax, esi
// 0071f750  83e30f               and ebx, 0xf
// 0071f753  7610                 jbe 0x71f765
// 0071f755  3bf0                 cmp esi, eax
// 0071f757  7317                 jae 0x71f770
// 0071f759  83eb01               sub ebx, 1
// 0071f75c  0fb716               movzx edx, word ptr [esi]
// 0071f75f  8d745602             lea esi, [esi + edx*2 + 2]
// 0071f763  75f0                 jne 0x71f755
// 0071f765  3bf0                 cmp esi, eax
// 0071f767  7307                 jae 0x71f770
// 0071f769  0fb72e               movzx ebp, word ptr [esi]
// 0071f76c  85ed                 test ebp, ebp
// 0071f76e  750a                 jne 0x71f77a
// 0071f770  5e                   pop esi
// 0071f771  5f                   pop edi
// 0071f772  5d                   pop ebp
// 0071f773  33c0                 xor eax, eax
// 0071f775  5b                   pop ebx
// 0071f776  59                   pop ecx
// 0071f777  c20c00               ret 0xc
// 0071f77a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0071f77e  8b400c               mov eax, dword ptr [eax + 0xc]
// 0071f781  85c0                 test eax, eax
// 0071f783  7405                 je 0x71f78a
// 0071f785  8b5804               mov ebx, dword ptr [eax + 4]
// 0071f788  eb02                 jmp 0x71f78c
// 0071f78a  33db                 xor ebx, ebx
// 0071f78c  6a00                 push 0
// 0071f78e  6a00                 push 0
// 0071f790  6a00                 push 0
// 0071f792  6a00                 push 0
// 0071f794  55                   push ebp
// 0071f795  8d7e02               lea edi, [esi + 2]
// 0071f798  57                   push edi
// 0071f799  6a00                 push 0
// 0071f79b  53                   push ebx
// 0071f79c  ff15ec228000         call dword ptr [0x8022ec]
// 0071f7a2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0071f7a6  8bf0                 mov esi, eax
// 0071f7a8  56                   push esi
// 0071f7a9  ff15d03a8000         call dword ptr [0x803ad0]
// 0071f7af  6a00                 push 0
// 0071f7b1  6a00                 push 0
// 0071f7b3  56                   push esi
// 0071f7b4  50                   push eax
// 0071f7b5  55                   push ebp
// 0071f7b6  57                   push edi
// 0071f7b7  6a00                 push 0
// 0071f7b9  53                   push ebx
// 0071f7ba  ff15ec228000         call dword ptr [0x8022ec]
// 0071f7c0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0071f7c4  56                   push esi
// 0071f7c5  ff1580338000         call dword ptr [0x803380]
// 0071f7cb  8bc6                 mov eax, esi
// 0071f7cd  5e                   pop esi
// 0071f7ce  5f                   pop edi
// 0071f7cf  5d                   pop ebp
// 0071f7d0  5b                   pop ebx
// 0071f7d1  59                   pop ecx
// 0071f7d2  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Common\XTPResourceManager.cpp (function ?LoadLocaleString@CXTPResourceManager@@QBEHPAUHINSTANCE__@@IAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPResourceManager.cpp
