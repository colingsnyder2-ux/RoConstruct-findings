// roc 2008-06 006c9090  unit: CXTPReportControl  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c9090
//
// 006c9090  53                   push ebx
// 006c9091  8bd9                 mov ebx, ecx
// 006c9093  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006c9097  8b01                 mov eax, dword ptr [ecx]
// 006c9099  8b506c               mov edx, dword ptr [eax + 0x6c]
// 006c909c  55                   push ebp
// 006c909d  56                   push esi
// 006c909e  ffd2                 call edx
// 006c90a0  8b8be0000000         mov ecx, dword ptr [ebx + 0xe0]
// 006c90a6  8bf0                 mov esi, eax
// 006c90a8  46                   inc esi
// 006c90a9  33ed                 xor ebp, ebp
// 006c90ab  e8a00f0100           call 0x6da050
// 006c90b0  3bf0                 cmp esi, eax
// 006c90b2  7d7f                 jge 0x6c9133
// 006c90b4  57                   push edi
// 006c90b5  8b8be0000000         mov ecx, dword ptr [ebx + 0xe0]
// 006c90bb  8b01                 mov eax, dword ptr [ecx]
// 006c90bd  8b505c               mov edx, dword ptr [eax + 0x5c]
// 006c90c0  56                   push esi
// 006c90c1  ffd2                 call edx
// 006c90c3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c90c7  8bf8                 mov edi, eax
// 006c90c9  8b07                 mov eax, dword ptr [edi]
// 006c90cb  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 006c90d1  51                   push ecx
// 006c90d2  8bcf                 mov ecx, edi
// 006c90d4  ffd2                 call edx
// 006c90d6  85c0                 test eax, eax
// 006c90d8  742c                 je 0x6c9106
// 006c90da  c7475c00000000       mov dword ptr [edi + 0x5c], 0
// 006c90e1  c74728ffffffff       mov dword ptr [edi + 0x28], 0xffffffff
// 006c90e8  8b8be0000000         mov ecx, dword ptr [ebx + 0xe0]
// 006c90ee  8b01                 mov eax, dword ptr [ecx]
// 006c90f0  8b5064               mov edx, dword ptr [eax + 0x64]
// 006c90f3  56                   push esi
// 006c90f4  ffd2                 call edx
// 006c90f6  8b8be0000000         mov ecx, dword ptr [ebx + 0xe0]
// 006c90fc  45                   inc ebp
// 006c90fd  e84e0f0100           call 0x6da050
// 006c9102  3bf0                 cmp esi, eax
// 006c9104  7caf                 jl 0x6c90b5
// 006c9106  85ed                 test ebp, ebp
// 006c9108  7e28                 jle 0x6c9132
// 006c910a  8b8b28010000         mov ecx, dword ptr [ebx + 0x128]
// 006c9110  55                   push ebp
// 006c9111  8d7eff               lea edi, [esi - 1]
// 006c9114  57                   push edi
// 006c9115  e8c61d0100           call 0x6daee0
// 006c911a  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 006c9120  3bc6                 cmp eax, esi
// 006c9122  7c0e                 jl 0x6c9132
// 006c9124  2bc5                 sub eax, ebp
// 006c9126  3bf8                 cmp edi, eax
// 006c9128  7e02                 jle 0x6c912c
// 006c912a  8bc7                 mov eax, edi
// 006c912c  89831c010000         mov dword ptr [ebx + 0x11c], eax
// 006c9132  5f                   pop edi
// 006c9133  5e                   pop esi
// 006c9134  5d                   pop ebp
// 006c9135  5b                   pop ebx
// 006c9136  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?_DoCollapse@CXTPReportControl@@MAEXPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
