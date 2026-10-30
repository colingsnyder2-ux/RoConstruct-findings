// roc 2011-06 008abbe0  unit: CXTPReportPaintManager  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008abbe0
//
// 008abbe0  83ec08               sub esp, 8
// 008abbe3  56                   push esi
// 008abbe4  8b742410             mov esi, dword ptr [esp + 0x10]
// 008abbe8  85f6                 test esi, esi
// 008abbea  0f840a010000         je 0x8abcfa
// 008abbf0  8b06                 mov eax, dword ptr [esi]
// 008abbf2  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 008abbf8  8bce                 mov ecx, esi
// 008abbfa  ffd2                 call edx
// 008abbfc  33c9                 xor ecx, ecx
// 008abbfe  89442408             mov dword ptr [esp + 8], eax
// 008abc02  894c2404             mov dword ptr [esp + 4], ecx
// 008abc06  85c0                 test eax, eax
// 008abc08  0f8eec000000         jle 0x8abcfa
// 008abc0e  53                   push ebx
// 008abc0f  55                   push ebp
// 008abc10  57                   push edi
// 008abc11  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008abc15  8b06                 mov eax, dword ptr [esi]
// 008abc17  8b90bc000000         mov edx, dword ptr [eax + 0xbc]
// 008abc1d  51                   push ecx
// 008abc1e  8bce                 mov ecx, esi
// 008abc20  ffd2                 call edx
// 008abc22  8bd8                 mov ebx, eax
// 008abc24  85db                 test ebx, ebx
// 008abc26  0f84b8000000         je 0x8abce4
// 008abc2c  8b7330               mov esi, dword ptr [ebx + 0x30]
// 008abc2f  8bcf                 mov ecx, edi
// 008abc31  ff15a826a400         call dword ptr [0xa426a8]
// 008abc37  48                   dec eax
// 008abc38  3bf0                 cmp esi, eax
// 008abc3a  7d04                 jge 0x8abc40
// 008abc3c  8bc6                 mov eax, esi
// 008abc3e  eb09                 jmp 0x8abc49
// 008abc40  8bcf                 mov ecx, edi
// 008abc42  ff15a826a400         call dword ptr [0xa426a8]
// 008abc48  48                   dec eax
// 008abc49  85c0                 test eax, eax
// 008abc4b  7d04                 jge 0x8abc51
// 008abc4d  33f6                 xor esi, esi
// 008abc4f  eb1b                 jmp 0x8abc6c
// 008abc51  8b7330               mov esi, dword ptr [ebx + 0x30]
// 008abc54  8bcf                 mov ecx, edi
// 008abc56  ff15a826a400         call dword ptr [0xa426a8]
// 008abc5c  48                   dec eax
// 008abc5d  3bf0                 cmp esi, eax
// 008abc5f  7c0b                 jl 0x8abc6c
// 008abc61  8bcf                 mov ecx, edi
// 008abc63  ff15a826a400         call dword ptr [0xa426a8]
// 008abc69  8bf0                 mov esi, eax
// 008abc6b  4e                   dec esi
// 008abc6c  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 008abc6f  8b4334               mov eax, dword ptr [ebx + 0x34]
// 008abc72  8d2c08               lea ebp, [eax + ecx]
// 008abc75  8bcf                 mov ecx, edi
// 008abc77  ff15a826a400         call dword ptr [0xa426a8]
// 008abc7d  3be8                 cmp ebp, eax
// 008abc7f  7d04                 jge 0x8abc85
// 008abc81  8bc5                 mov eax, ebp
// 008abc83  eb08                 jmp 0x8abc8d
// 008abc85  8bcf                 mov ecx, edi
// 008abc87  ff15a826a400         call dword ptr [0xa426a8]
// 008abc8d  85c0                 test eax, eax
// 008abc8f  7d04                 jge 0x8abc95
// 008abc91  33db                 xor ebx, ebx
// 008abc93  eb1f                 jmp 0x8abcb4
// 008abc95  8b5334               mov edx, dword ptr [ebx + 0x34]
// 008abc98  8b4330               mov eax, dword ptr [ebx + 0x30]
// 008abc9b  8bcf                 mov ecx, edi
// 008abc9d  8d1c02               lea ebx, [edx + eax]
// 008abca0  ff15a826a400         call dword ptr [0xa426a8]
// 008abca6  3bd8                 cmp ebx, eax
// 008abca8  7c0a                 jl 0x8abcb4
// 008abcaa  8bcf                 mov ecx, edi
// 008abcac  ff15a826a400         call dword ptr [0xa426a8]
// 008abcb2  8bd8                 mov ebx, eax
// 008abcb4  3bf3                 cmp esi, ebx
// 008abcb6  7d28                 jge 0x8abce0
// 008abcb8  eb06                 jmp 0x8abcc0
// 008abcba  8d9b00000000         lea ebx, [ebx]
// 008abcc0  56                   push esi
// 008abcc1  8bcf                 mov ecx, edi
// 008abcc3  ff157028a400         call dword ptr [0xa42870]
// 008abcc9  3c20                 cmp al, 0x20
// 008abccb  750e                 jne 0x8abcdb
// 008abccd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008abcd1  51                   push ecx
// 008abcd2  56                   push esi
// 008abcd3  8bcf                 mov ecx, edi
// 008abcd5  ff155c2ca400         call dword ptr [0xa42c5c]
// 008abcdb  46                   inc esi
// 008abcdc  3bf3                 cmp esi, ebx
// 008abcde  7ce0                 jl 0x8abcc0
// 008abce0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008abce4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008abce8  41                   inc ecx
// 008abce9  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 008abced  894c2410             mov dword ptr [esp + 0x10], ecx
// 008abcf1  0f8c1effffff         jl 0x8abc15
// 008abcf7  5f                   pop edi
// 008abcf8  5d                   pop ebp
// 008abcf9  5b                   pop ebx
// 008abcfa  5e                   pop esi
// 008abcfb  83c408               add esp, 8
// 008abcfe  c20c00               ret 0xc
// copied from an identical function in another client (function ?ReplaceInHyperLinks@CXTPReportPaintManager@@UAEXPAVCXTPReportRecordItem@@AAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp