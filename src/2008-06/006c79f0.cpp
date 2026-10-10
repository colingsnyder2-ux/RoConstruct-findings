// roc 2008-06 006c79f0  unit: CInstanceRecord::CNameItem  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c79f0
//
// 006c79f0  53                   push ebx
// 006c79f1  55                   push ebp
// 006c79f2  56                   push esi
// 006c79f3  57                   push edi
// 006c79f4  8bf9                 mov edi, ecx
// 006c79f6  8b07                 mov eax, dword ptr [edi]
// 006c79f8  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 006c79fe  ffd2                 call edx
// 006c7a00  8bd8                 mov ebx, eax
// 006c7a02  33f6                 xor esi, esi
// 006c7a04  85db                 test ebx, ebx
// 006c7a06  7e32                 jle 0x6c7a3a
// 006c7a08  8b2d2c2d8000         mov ebp, dword ptr [0x802d2c]
// 006c7a0e  8bff                 mov edi, edi
// 006c7a10  8b07                 mov eax, dword ptr [edi]
// 006c7a12  8b90bc000000         mov edx, dword ptr [eax + 0xbc]
// 006c7a18  56                   push esi
// 006c7a19  8bcf                 mov ecx, edi
// 006c7a1b  ffd2                 call edx
// 006c7a1d  85c0                 test eax, eax
// 006c7a1f  7414                 je 0x6c7a35
// 006c7a21  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006c7a25  8b542414             mov edx, dword ptr [esp + 0x14]
// 006c7a29  51                   push ecx
// 006c7a2a  52                   push edx
// 006c7a2b  83c020               add eax, 0x20
// 006c7a2e  50                   push eax
// 006c7a2f  ffd5                 call ebp
// 006c7a31  85c0                 test eax, eax
// 006c7a33  750f                 jne 0x6c7a44
// 006c7a35  46                   inc esi
// 006c7a36  3bf3                 cmp esi, ebx
// 006c7a38  7cd6                 jl 0x6c7a10
// 006c7a3a  5f                   pop edi
// 006c7a3b  5e                   pop esi
// 006c7a3c  5d                   pop ebp
// 006c7a3d  83c8ff               or eax, 0xffffffff
// 006c7a40  5b                   pop ebx
// 006c7a41  c20800               ret 8
// 006c7a44  5f                   pop edi
// 006c7a45  8bc6                 mov eax, esi
// 006c7a47  5e                   pop esi
// 006c7a48  5d                   pop ebp
// 006c7a49  5b                   pop ebx
// 006c7a4a  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecordItem.cpp (function ?HitTestHyperlink@CXTPReportRecordItem@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp
