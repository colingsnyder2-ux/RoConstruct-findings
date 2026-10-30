// roc 2009-12 0089a920  unit: CXTPReportPaintManager  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089a920
//
// 0089a920  83ec08               sub esp, 8
// 0089a923  56                   push esi
// 0089a924  8b742410             mov esi, dword ptr [esp + 0x10]
// 0089a928  85f6                 test esi, esi
// 0089a92a  0f840a010000         je 0x89aa3a
// 0089a930  8b06                 mov eax, dword ptr [esi]
// 0089a932  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0089a938  8bce                 mov ecx, esi
// 0089a93a  ffd2                 call edx
// 0089a93c  33c9                 xor ecx, ecx
// 0089a93e  89442408             mov dword ptr [esp + 8], eax
// 0089a942  894c2404             mov dword ptr [esp + 4], ecx
// 0089a946  85c0                 test eax, eax
// 0089a948  0f8eec000000         jle 0x89aa3a
// 0089a94e  53                   push ebx
// 0089a94f  55                   push ebp
// 0089a950  57                   push edi
// 0089a951  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0089a955  8b06                 mov eax, dword ptr [esi]
// 0089a957  8b90bc000000         mov edx, dword ptr [eax + 0xbc]
// 0089a95d  51                   push ecx
// 0089a95e  8bce                 mov ecx, esi
// 0089a960  ffd2                 call edx
// 0089a962  8bd8                 mov ebx, eax
// 0089a964  85db                 test ebx, ebx
// 0089a966  0f84b8000000         je 0x89aa24
// 0089a96c  8b7330               mov esi, dword ptr [ebx + 0x30]
// 0089a96f  8bcf                 mov ecx, edi
// 0089a971  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089a977  48                   dec eax
// 0089a978  3bf0                 cmp esi, eax
// 0089a97a  7d04                 jge 0x89a980
// 0089a97c  8bc6                 mov eax, esi
// 0089a97e  eb09                 jmp 0x89a989
// 0089a980  8bcf                 mov ecx, edi
// 0089a982  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089a988  48                   dec eax
// 0089a989  85c0                 test eax, eax
// 0089a98b  7d04                 jge 0x89a991
// 0089a98d  33f6                 xor esi, esi
// 0089a98f  eb1b                 jmp 0x89a9ac
// 0089a991  8b7330               mov esi, dword ptr [ebx + 0x30]
// 0089a994  8bcf                 mov ecx, edi
// 0089a996  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089a99c  48                   dec eax
// 0089a99d  3bf0                 cmp esi, eax
// 0089a99f  7c0b                 jl 0x89a9ac
// 0089a9a1  8bcf                 mov ecx, edi
// 0089a9a3  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089a9a9  8bf0                 mov esi, eax
// 0089a9ab  4e                   dec esi
// 0089a9ac  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0089a9af  8b4334               mov eax, dword ptr [ebx + 0x34]
// 0089a9b2  8d2c08               lea ebp, [eax + ecx]
// 0089a9b5  8bcf                 mov ecx, edi
// 0089a9b7  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089a9bd  3be8                 cmp ebp, eax
// 0089a9bf  7d04                 jge 0x89a9c5
// 0089a9c1  8bc5                 mov eax, ebp
// 0089a9c3  eb08                 jmp 0x89a9cd
// 0089a9c5  8bcf                 mov ecx, edi
// 0089a9c7  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089a9cd  85c0                 test eax, eax
// 0089a9cf  7d04                 jge 0x89a9d5
// 0089a9d1  33db                 xor ebx, ebx
// 0089a9d3  eb1f                 jmp 0x89a9f4
// 0089a9d5  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0089a9d8  8b4330               mov eax, dword ptr [ebx + 0x30]
// 0089a9db  8bcf                 mov ecx, edi
// 0089a9dd  8d1c02               lea ebx, [edx + eax]
// 0089a9e0  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089a9e6  3bd8                 cmp ebx, eax
// 0089a9e8  7c0a                 jl 0x89a9f4
// 0089a9ea  8bcf                 mov ecx, edi
// 0089a9ec  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089a9f2  8bd8                 mov ebx, eax
// 0089a9f4  3bf3                 cmp esi, ebx
// 0089a9f6  7d28                 jge 0x89aa20
// 0089a9f8  eb06                 jmp 0x89aa00
// 0089a9fa  8d9b00000000         lea ebx, [ebx]
// 0089aa00  56                   push esi
// 0089aa01  8bcf                 mov ecx, edi
// 0089aa03  ff15c4d79800         call dword ptr [0x98d7c4]
// 0089aa09  3c20                 cmp al, 0x20
// 0089aa0b  750e                 jne 0x89aa1b
// 0089aa0d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089aa11  51                   push ecx
// 0089aa12  56                   push esi
// 0089aa13  8bcf                 mov ecx, edi
// 0089aa15  ff1540dc9800         call dword ptr [0x98dc40]
// 0089aa1b  46                   inc esi
// 0089aa1c  3bf3                 cmp esi, ebx
// 0089aa1e  7ce0                 jl 0x89aa00
// 0089aa20  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0089aa24  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0089aa28  41                   inc ecx
// 0089aa29  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0089aa2d  894c2410             mov dword ptr [esp + 0x10], ecx
// 0089aa31  0f8c1effffff         jl 0x89a955
// 0089aa37  5f                   pop edi
// 0089aa38  5d                   pop ebp
// 0089aa39  5b                   pop ebx
// 0089aa3a  5e                   pop esi
// 0089aa3b  83c408               add esp, 8
// 0089aa3e  c20c00               ret 0xc
// copied from an identical function in another client (function ?ReplaceInHyperLinks@CXTPReportPaintManager@@UAEXPAVCXTPReportRecordItem@@AAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@D@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp