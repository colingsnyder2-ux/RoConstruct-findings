// roc 2009-06 007bfb20  unit: CXTPReportPaintManager  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007bfb20
//
// 007bfb20  83ec08               sub esp, 8
// 007bfb23  56                   push esi
// 007bfb24  8b742410             mov esi, dword ptr [esp + 0x10]
// 007bfb28  85f6                 test esi, esi
// 007bfb2a  0f840a010000         je 0x7bfc3a
// 007bfb30  8b06                 mov eax, dword ptr [esi]
// 007bfb32  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 007bfb38  8bce                 mov ecx, esi
// 007bfb3a  ffd2                 call edx
// 007bfb3c  33c9                 xor ecx, ecx
// 007bfb3e  89442408             mov dword ptr [esp + 8], eax
// 007bfb42  894c2404             mov dword ptr [esp + 4], ecx
// 007bfb46  85c0                 test eax, eax
// 007bfb48  0f8eec000000         jle 0x7bfc3a
// 007bfb4e  53                   push ebx
// 007bfb4f  55                   push ebp
// 007bfb50  57                   push edi
// 007bfb51  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007bfb55  8b06                 mov eax, dword ptr [esi]
// 007bfb57  8b90bc000000         mov edx, dword ptr [eax + 0xbc]
// 007bfb5d  51                   push ecx
// 007bfb5e  8bce                 mov ecx, esi
// 007bfb60  ffd2                 call edx
// 007bfb62  8bd8                 mov ebx, eax
// 007bfb64  85db                 test ebx, ebx
// 007bfb66  0f84b8000000         je 0x7bfc24
// 007bfb6c  8b7330               mov esi, dword ptr [ebx + 0x30]
// 007bfb6f  8bcf                 mov ecx, edi
// 007bfb71  ff1554fb8900         call dword ptr [0x89fb54]
// 007bfb77  48                   dec eax
// 007bfb78  3bf0                 cmp esi, eax
// 007bfb7a  7d04                 jge 0x7bfb80
// 007bfb7c  8bc6                 mov eax, esi
// 007bfb7e  eb09                 jmp 0x7bfb89
// 007bfb80  8bcf                 mov ecx, edi
// 007bfb82  ff1554fb8900         call dword ptr [0x89fb54]
// 007bfb88  48                   dec eax
// 007bfb89  85c0                 test eax, eax
// 007bfb8b  7d04                 jge 0x7bfb91
// 007bfb8d  33f6                 xor esi, esi
// 007bfb8f  eb1b                 jmp 0x7bfbac
// 007bfb91  8b7330               mov esi, dword ptr [ebx + 0x30]
// 007bfb94  8bcf                 mov ecx, edi
// 007bfb96  ff1554fb8900         call dword ptr [0x89fb54]
// 007bfb9c  48                   dec eax
// 007bfb9d  3bf0                 cmp esi, eax
// 007bfb9f  7c0b                 jl 0x7bfbac
// 007bfba1  8bcf                 mov ecx, edi
// 007bfba3  ff1554fb8900         call dword ptr [0x89fb54]
// 007bfba9  8bf0                 mov esi, eax
// 007bfbab  4e                   dec esi
// 007bfbac  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 007bfbaf  8b4334               mov eax, dword ptr [ebx + 0x34]
// 007bfbb2  8d2c08               lea ebp, [eax + ecx]
// 007bfbb5  8bcf                 mov ecx, edi
// 007bfbb7  ff1554fb8900         call dword ptr [0x89fb54]
// 007bfbbd  3be8                 cmp ebp, eax
// 007bfbbf  7d04                 jge 0x7bfbc5
// 007bfbc1  8bc5                 mov eax, ebp
// 007bfbc3  eb08                 jmp 0x7bfbcd
// 007bfbc5  8bcf                 mov ecx, edi
// 007bfbc7  ff1554fb8900         call dword ptr [0x89fb54]
// 007bfbcd  85c0                 test eax, eax
// 007bfbcf  7d04                 jge 0x7bfbd5
// 007bfbd1  33db                 xor ebx, ebx
// 007bfbd3  eb1f                 jmp 0x7bfbf4
// 007bfbd5  8b5334               mov edx, dword ptr [ebx + 0x34]
// 007bfbd8  8b4330               mov eax, dword ptr [ebx + 0x30]
// 007bfbdb  8bcf                 mov ecx, edi
// 007bfbdd  8d1c02               lea ebx, [edx + eax]
// 007bfbe0  ff1554fb8900         call dword ptr [0x89fb54]
// 007bfbe6  3bd8                 cmp ebx, eax
// 007bfbe8  7c0a                 jl 0x7bfbf4
// 007bfbea  8bcf                 mov ecx, edi
// 007bfbec  ff1554fb8900         call dword ptr [0x89fb54]
// 007bfbf2  8bd8                 mov ebx, eax
// 007bfbf4  3bf3                 cmp esi, ebx
// 007bfbf6  7d28                 jge 0x7bfc20
// 007bfbf8  eb06                 jmp 0x7bfc00
// 007bfbfa  8d9b00000000         lea ebx, [ebx]
// 007bfc00  56                   push esi
// 007bfc01  8bcf                 mov ecx, edi
// 007bfc03  ff15acff8900         call dword ptr [0x89ffac]
// 007bfc09  3c20                 cmp al, 0x20
// 007bfc0b  750e                 jne 0x7bfc1b
// 007bfc0d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007bfc11  51                   push ecx
// 007bfc12  56                   push esi
// 007bfc13  8bcf                 mov ecx, edi
// 007bfc15  ff158cf78900         call dword ptr [0x89f78c]
// 007bfc1b  46                   inc esi
// 007bfc1c  3bf3                 cmp esi, ebx
// 007bfc1e  7ce0                 jl 0x7bfc00
// 007bfc20  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007bfc24  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007bfc28  41                   inc ecx
// 007bfc29  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 007bfc2d  894c2410             mov dword ptr [esp + 0x10], ecx
// 007bfc31  0f8c1effffff         jl 0x7bfb55
// 007bfc37  5f                   pop edi
// 007bfc38  5d                   pop ebp
// 007bfc39  5b                   pop ebx
// 007bfc3a  5e                   pop esi
// 007bfc3b  83c408               add esp, 8
// 007bfc3e  c20c00               ret 0xc
// copied from an identical function in another client (function ?ReplaceInHyperLinks@CXTPReportPaintManager@@UAEXPAVCXTPReportRecordItem@@AAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@D@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp