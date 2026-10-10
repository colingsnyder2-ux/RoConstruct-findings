// roc 2008-06 00751930  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00751930
//
// 00751930  83ec28               sub esp, 0x28
// 00751933  53                   push ebx
// 00751934  56                   push esi
// 00751935  8bf1                 mov esi, ecx
// 00751937  8b06                 mov eax, dword ptr [esi]
// 00751939  8b90d0000000         mov edx, dword ptr [eax + 0xd0]
// 0075193f  57                   push edi
// 00751940  ffd2                 call edx
// 00751942  33ff                 xor edi, edi
// 00751944  85c0                 test eax, eax
// 00751946  0f8454010000         je 0x751aa0
// 0075194c  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00751950  3bdf                 cmp ebx, edi
// 00751952  0f8448010000         je 0x751aa0
// 00751958  397e20               cmp dword ptr [esi + 0x20], edi
// 0075195b  0f843f010000         je 0x751aa0
// 00751961  8b06                 mov eax, dword ptr [esi]
// 00751963  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 00751969  55                   push ebp
// 0075196a  8bce                 mov ecx, esi
// 0075196c  ffd2                 call edx
// 0075196e  85c0                 test eax, eax
// 00751970  7445                 je 0x7519b7
// 00751972  8b06                 mov eax, dword ptr [esi]
// 00751974  8b5060               mov edx, dword ptr [eax + 0x60]
// 00751977  8bce                 mov ecx, esi
// 00751979  ffd2                 call edx
// 0075197b  8bc8                 mov ecx, eax
// 0075197d  e8eeed0400           call 0x7a0770
// 00751982  3bd8                 cmp ebx, eax
// 00751984  7531                 jne 0x7519b7
// 00751986  8b5e38               mov ebx, dword ptr [esi + 0x38]
// 00751989  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0075198c  8b6e34               mov ebp, dword ptr [esi + 0x34]
// 0075198f  8bfb                 mov edi, ebx
// 00751991  2b7e68               sub edi, dword ptr [esi + 0x68]
// 00751994  e86796f7ff           call 0x6cb000
// 00751999  8bc8                 mov ecx, eax
// 0075199b  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0075199f  034e2c               add ecx, dword ptr [esi + 0x2c]
// 007519a2  896808               mov dword ptr [eax + 8], ebp
// 007519a5  5d                   pop ebp
// 007519a6  897804               mov dword ptr [eax + 4], edi
// 007519a9  5f                   pop edi
// 007519aa  5e                   pop esi
// 007519ab  89580c               mov dword ptr [eax + 0xc], ebx
// 007519ae  8908                 mov dword ptr [eax], ecx
// 007519b0  5b                   pop ebx
// 007519b1  83c428               add esp, 0x28
// 007519b4  c20800               ret 8
// 007519b7  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007519ba  e84196f7ff           call 0x6cb000
// 007519bf  8b5624               mov edx, dword ptr [esi + 0x24]
// 007519c2  8be8                 mov ebp, eax
// 007519c4  8b82ec000000         mov eax, dword ptr [edx + 0xec]
// 007519ca  8b4830               mov ecx, dword ptr [eax + 0x30]
// 007519cd  8b5630               mov edx, dword ptr [esi + 0x30]
// 007519d0  036e2c               add ebp, dword ptr [esi + 0x2c]
// 007519d3  8954241c             mov dword ptr [esp + 0x1c], edx
// 007519d7  8b5638               mov edx, dword ptr [esi + 0x38]
// 007519da  2b5668               sub edx, dword ptr [esi + 0x68]
// 007519dd  33db                 xor ebx, ebx
// 007519df  3bcf                 cmp ecx, edi
// 007519e1  89442414             mov dword ptr [esp + 0x14], eax
// 007519e5  894c2410             mov dword ptr [esp + 0x10], ecx
// 007519e9  897c2418             mov dword ptr [esp + 0x18], edi
// 007519ed  897c2420             mov dword ptr [esp + 0x20], edi
// 007519f1  89542424             mov dword ptr [esp + 0x24], edx
// 007519f5  7e55                 jle 0x751a4c
// 007519f7  3bdf                 cmp ebx, edi
// 007519f9  7c4c                 jl 0x751a47
// 007519fb  3b5830               cmp ebx, dword ptr [eax + 0x30]
// 007519fe  7d47                 jge 0x751a47
// 00751a00  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00751a03  8b3c9a               mov edi, dword ptr [edx + ebx*4]
// 00751a06  85ff                 test edi, edi
// 00751a08  743b                 je 0x751a45
// 00751a0a  8bcf                 mov ecx, edi
// 00751a0c  e8cf2bf8ff           call 0x6d45e0
// 00751a11  85c0                 test eax, eax
// 00751a13  7428                 je 0x751a3d
// 00751a15  8d442428             lea eax, [esp + 0x28]
// 00751a19  50                   push eax
// 00751a1a  8bcf                 mov ecx, edi
// 00751a1c  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00751a20  e85b2bf8ff           call 0x6d4580
// 00751a25  8b4008               mov eax, dword ptr [eax + 8]
// 00751a28  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00751a2b  57                   push edi
// 00751a2c  89442424             mov dword ptr [esp + 0x24], eax
// 00751a30  8be8                 mov ebp, eax
// 00751a32  e80965f8ff           call 0x6d7f40
// 00751a37  3b442440             cmp eax, dword ptr [esp + 0x40]
// 00751a3b  7428                 je 0x751a65
// 00751a3d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00751a41  8b442414             mov eax, dword ptr [esp + 0x14]
// 00751a45  33ff                 xor edi, edi
// 00751a47  43                   inc ebx
// 00751a48  3bd9                 cmp ebx, ecx
// 00751a4a  7cab                 jl 0x7519f7
// 00751a4c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00751a50  5d                   pop ebp
// 00751a51  8938                 mov dword ptr [eax], edi
// 00751a53  897804               mov dword ptr [eax + 4], edi
// 00751a56  897808               mov dword ptr [eax + 8], edi
// 00751a59  89780c               mov dword ptr [eax + 0xc], edi
// 00751a5c  5f                   pop edi
// 00751a5d  5e                   pop esi
// 00751a5e  5b                   pop ebx
// 00751a5f  83c428               add esp, 0x28
// 00751a62  c20800               ret 8
// 00751a65  8b16                 mov edx, dword ptr [esi]
// 00751a67  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 00751a6d  57                   push edi
// 00751a6e  8d44241c             lea eax, [esp + 0x1c]
// 00751a72  50                   push eax
// 00751a73  8bce                 mov ecx, esi
// 00751a75  ffd2                 call edx
// 00751a77  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00751a7b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00751a7f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00751a83  5d                   pop ebp
// 00751a84  8908                 mov dword ptr [eax], ecx
// 00751a86  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00751a8a  895004               mov dword ptr [eax + 4], edx
// 00751a8d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00751a91  5f                   pop edi
// 00751a92  5e                   pop esi
// 00751a93  894808               mov dword ptr [eax + 8], ecx
// 00751a96  89500c               mov dword ptr [eax + 0xc], edx
// 00751a99  5b                   pop ebx
// 00751a9a  83c428               add esp, 0x28
// 00751a9d  c20800               ret 8
// 00751aa0  8b442438             mov eax, dword ptr [esp + 0x38]
// 00751aa4  8938                 mov dword ptr [eax], edi
// 00751aa6  897804               mov dword ptr [eax + 4], edi
// 00751aa9  897808               mov dword ptr [eax + 8], edi
// 00751aac  89780c               mov dword ptr [eax + 0xc], edi
// 00751aaf  5f                   pop edi
// 00751ab0  5e                   pop esi
// 00751ab1  5b                   pop ebx
// 00751ab2  83c428               add esp, 0x28
// 00751ab5  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRow.cpp (function ?GetItemRect@CXTPReportRow@@UAE?AVCRect@@PAVCXTPReportRecordItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp
