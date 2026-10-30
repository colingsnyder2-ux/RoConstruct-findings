// roc 2009-12 008c9a70  unit: CXTPPropertyGridPaintManager  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c9a70
//
// 008c9a70  53                   push ebx
// 008c9a71  56                   push esi
// 008c9a72  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c9a76  8bd9                 mov ebx, ecx
// 008c9a78  85f6                 test esi, esi
// 008c9a7a  750b                 jne 0x8c9a87
// 008c9a7c  8b4374               mov eax, dword ptr [ebx + 0x74]
// 008c9a7f  5e                   pop esi
// 008c9a80  83c020               add eax, 0x20
// 008c9a83  5b                   pop ebx
// 008c9a84  c20800               ret 8
// 008c9a87  57                   push edi
// 008c9a88  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008c9a8c  6a00                 push 0
// 008c9a8e  57                   push edi
// 008c9a8f  8bce                 mov ecx, esi
// 008c9a91  e8aab4f9ff           call 0x864f40
// 008c9a96  85c0                 test eax, eax
// 008c9a98  740b                 je 0x8c9aa5
// 008c9a9a  83c020               add eax, 0x20
// 008c9a9d  7406                 je 0x8c9aa5
// 008c9a9f  83780400             cmp dword ptr [eax + 4], 0
// 008c9aa3  7538                 jne 0x8c9add
// 008c9aa5  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 008c9aac  751d                 jne 0x8c9acb
// 008c9aae  85ff                 test edi, edi
// 008c9ab0  7425                 je 0x8c9ad7
// 008c9ab2  8b4360               mov eax, dword ptr [ebx + 0x60]
// 008c9ab5  83b85001000000       cmp dword ptr [eax + 0x150], 0
// 008c9abc  7419                 je 0x8c9ad7
// 008c9abe  8b16                 mov edx, dword ptr [esi]
// 008c9ac0  8b4278               mov eax, dword ptr [edx + 0x78]
// 008c9ac3  8bce                 mov ecx, esi
// 008c9ac5  ffd0                 call eax
// 008c9ac7  85c0                 test eax, eax
// 008c9ac9  740c                 je 0x8c9ad7
// 008c9acb  8b4374               mov eax, dword ptr [ebx + 0x74]
// 008c9ace  5f                   pop edi
// 008c9acf  5e                   pop esi
// 008c9ad0  83c028               add eax, 0x28
// 008c9ad3  5b                   pop ebx
// 008c9ad4  c20800               ret 8
// 008c9ad7  8b4374               mov eax, dword ptr [ebx + 0x74]
// 008c9ada  83c020               add eax, 0x20
// 008c9add  5f                   pop edi
// 008c9ade  5e                   pop esi
// 008c9adf  5b                   pop ebx
// 008c9ae0  c20800               ret 8
// copied from an identical function in another client (function ?GetItemFont@CXTPPropertyGridPaintManager@@UAEPAVCFont@@PAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridPaintManager.cpp