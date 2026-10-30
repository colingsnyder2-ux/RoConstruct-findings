// roc 2009-12 008a2df0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2df0
//
// 008a2df0  53                   push ebx
// 008a2df1  56                   push esi
// 008a2df2  8bf1                 mov esi, ecx
// 008a2df4  8b06                 mov eax, dword ptr [esi]
// 008a2df6  8b5058               mov edx, dword ptr [eax + 0x58]
// 008a2df9  57                   push edi
// 008a2dfa  33db                 xor ebx, ebx
// 008a2dfc  ffd2                 call edx
// 008a2dfe  8bf8                 mov edi, eax
// 008a2e00  83ef01               sub edi, 1
// 008a2e03  7833                 js 0x8a2e38
// 008a2e05  55                   push ebp
// 008a2e06  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008a2e0a  8d9b00000000         lea ebx, [ebx]
// 008a2e10  8b06                 mov eax, dword ptr [esi]
// 008a2e12  8b5060               mov edx, dword ptr [eax + 0x60]
// 008a2e15  57                   push edi
// 008a2e16  8bce                 mov ecx, esi
// 008a2e18  ffd2                 call edx
// 008a2e1a  3bc5                 cmp eax, ebp
// 008a2e1c  7514                 jne 0x8a2e32
// 008a2e1e  8b06                 mov eax, dword ptr [esi]
// 008a2e20  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 008a2e26  6a01                 push 1
// 008a2e28  57                   push edi
// 008a2e29  8bce                 mov ecx, esi
// 008a2e2b  ffd2                 call edx
// 008a2e2d  bb01000000           mov ebx, 1
// 008a2e32  83ef01               sub edi, 1
// 008a2e35  79d9                 jns 0x8a2e10
// 008a2e37  5d                   pop ebp
// 008a2e38  5f                   pop edi
// 008a2e39  5e                   pop esi
// 008a2e3a  8bc3                 mov eax, ebx
// 008a2e3c  5b                   pop ebx
// 008a2e3d  c20400               ret 4
// copied from an identical function in another client (function ?RemoveElement@?$CXTPArrayT@PAVCXTPReportHyperlink@@PAV1@PAUIDispatch@@@@UAEHPAVCXTPReportHyperlink@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHyperlink.cpp