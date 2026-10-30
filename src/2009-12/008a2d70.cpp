// roc 2009-12 008a2d70  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2d70
//
// 008a2d70  53                   push ebx
// 008a2d71  55                   push ebp
// 008a2d72  56                   push esi
// 008a2d73  57                   push edi
// 008a2d74  8bf9                 mov edi, ecx
// 008a2d76  8b07                 mov eax, dword ptr [edi]
// 008a2d78  8b5058               mov edx, dword ptr [eax + 0x58]
// 008a2d7b  ffd2                 call edx
// 008a2d7d  8bd8                 mov ebx, eax
// 008a2d7f  33f6                 xor esi, esi
// 008a2d81  85db                 test ebx, ebx
// 008a2d83  7e1e                 jle 0x8a2da3
// 008a2d85  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008a2d89  8da42400000000       lea esp, [esp]
// 008a2d90  8b07                 mov eax, dword ptr [edi]
// 008a2d92  8b5060               mov edx, dword ptr [eax + 0x60]
// 008a2d95  56                   push esi
// 008a2d96  8bcf                 mov ecx, edi
// 008a2d98  ffd2                 call edx
// 008a2d9a  3bc5                 cmp eax, ebp
// 008a2d9c  740f                 je 0x8a2dad
// 008a2d9e  46                   inc esi
// 008a2d9f  3bf3                 cmp esi, ebx
// 008a2da1  7ced                 jl 0x8a2d90
// 008a2da3  5f                   pop edi
// 008a2da4  5e                   pop esi
// 008a2da5  5d                   pop ebp
// 008a2da6  83c8ff               or eax, 0xffffffff
// 008a2da9  5b                   pop ebx
// 008a2daa  c20400               ret 4
// 008a2dad  5f                   pop edi
// 008a2dae  8bc6                 mov eax, esi
// 008a2db0  5e                   pop esi
// 008a2db1  5d                   pop ebp
// 008a2db2  5b                   pop ebx
// 008a2db3  c20400               ret 4
// copied from an identical function in another client (function ?FindElement@?$CXTPArrayT@PAVCXTPReportHyperlink@@PAV1@PAUIDispatch@@@@UBEHPAVCXTPReportHyperlink@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHyperlink.cpp