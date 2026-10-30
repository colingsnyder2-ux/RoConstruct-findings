// roc 2009-12 0081a2e0  unit: CInstanceRecord::CNameItem  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a2e0
//
// 0081a2e0  6aff                 push -1
// 0081a2e2  68c2a99500           push 0x95a9c2
// 0081a2e7  64a100000000         mov eax, dword ptr fs:[0]
// 0081a2ed  50                   push eax
// 0081a2ee  53                   push ebx
// 0081a2ef  55                   push ebp
// 0081a2f0  56                   push esi
// 0081a2f1  57                   push edi
// 0081a2f2  a10052b600           mov eax, dword ptr [0xb65200]
// 0081a2f7  33c4                 xor eax, esp
// 0081a2f9  50                   push eax
// 0081a2fa  8d442414             lea eax, [esp + 0x14]
// 0081a2fe  64a300000000         mov dword ptr fs:[0], eax
// 0081a304  8bf1                 mov esi, ecx
// 0081a306  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0081a30a  85c9                 test ecx, ecx
// 0081a30c  7504                 jne 0x81a312
// 0081a30e  33c0                 xor eax, eax
// 0081a310  eb6a                 jmp 0x81a37c
// 0081a312  8b4654               mov eax, dword ptr [esi + 0x54]
// 0081a315  83f8ff               cmp eax, -1
// 0081a318  755f                 jne 0x81a379
// 0081a31a  394154               cmp dword ptr [ecx + 0x54], eax
// 0081a31d  755a                 jne 0x81a379
// 0081a31f  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0081a322  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0081a326  8b7850               mov edi, dword ptr [eax + 0x50]
// 0081a329  8b11                 mov edx, dword ptr [ecx]
// 0081a32b  8b526c               mov edx, dword ptr [edx + 0x6c]
// 0081a32e  53                   push ebx
// 0081a32f  8d442428             lea eax, [esp + 0x28]
// 0081a333  50                   push eax
// 0081a334  ffd2                 call edx
// 0081a336  8be8                 mov ebp, eax
// 0081a338  8b06                 mov eax, dword ptr [esi]
// 0081a33a  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0081a33d  53                   push ebx
// 0081a33e  8d4c242c             lea ecx, [esp + 0x2c]
// 0081a342  51                   push ecx
// 0081a343  8bce                 mov ecx, esi
// 0081a345  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0081a34d  ffd2                 call edx
// 0081a34f  8b17                 mov edx, dword ptr [edi]
// 0081a351  55                   push ebp
// 0081a352  50                   push eax
// 0081a353  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0081a356  8bcf                 mov ecx, edi
// 0081a358  c644242401           mov byte ptr [esp + 0x24], 1
// 0081a35d  ffd0                 call eax
// 0081a35f  8d4c2428             lea ecx, [esp + 0x28]
// 0081a363  8bf0                 mov esi, eax
// 0081a365  ff15c0de9800         call dword ptr [0x98dec0]
// 0081a36b  8d4c2424             lea ecx, [esp + 0x24]
// 0081a36f  ff15c0de9800         call dword ptr [0x98dec0]
// 0081a375  8bc6                 mov eax, esi
// 0081a377  eb03                 jmp 0x81a37c
// 0081a379  2b4154               sub eax, dword ptr [ecx + 0x54]
// 0081a37c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081a380  64890d00000000       mov dword ptr fs:[0], ecx
// 0081a387  59                   pop ecx
// 0081a388  5f                   pop edi
// 0081a389  5e                   pop esi
// 0081a38a  5d                   pop ebp
// 0081a38b  5b                   pop ebx
// 0081a38c  83c40c               add esp, 0xc
// 0081a38f  c20800               ret 8
// copied from an identical function in another client (function ?Compare@CXTPReportRecordItem@@UAEHPAVCXTPReportColumn@@PAV1@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp