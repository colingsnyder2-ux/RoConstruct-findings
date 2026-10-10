// roc 2008-06 006da180  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006da180
//
// 006da180  53                   push ebx
// 006da181  57                   push edi
// 006da182  8bd9                 mov ebx, ecx
// 006da184  33ff                 xor edi, edi
// 006da186  e8c5feffff           call 0x6da050
// 006da18b  85c0                 test eax, eax
// 006da18d  7e60                 jle 0x6da1ef
// 006da18f  55                   push ebp
// 006da190  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006da194  56                   push esi
// 006da195  8b03                 mov eax, dword ptr [ebx]
// 006da197  8b505c               mov edx, dword ptr [eax + 0x5c]
// 006da19a  57                   push edi
// 006da19b  8bcb                 mov ecx, ebx
// 006da19d  ffd2                 call edx
// 006da19f  8bf0                 mov esi, eax
// 006da1a1  897e6c               mov dword ptr [esi + 0x6c], edi
// 006da1a4  85ed                 test ebp, ebp
// 006da1a6  7439                 je 0x6da1e1
// 006da1a8  8b06                 mov eax, dword ptr [esi]
// 006da1aa  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 006da1b0  8bce                 mov ecx, esi
// 006da1b2  ffd2                 call edx
// 006da1b4  85c0                 test eax, eax
// 006da1b6  7429                 je 0x6da1e1
// 006da1b8  8b06                 mov eax, dword ptr [esi]
// 006da1ba  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 006da1c0  8bce                 mov ecx, esi
// 006da1c2  ffd2                 call edx
// 006da1c4  85c0                 test eax, eax
// 006da1c6  7419                 je 0x6da1e1
// 006da1c8  8b06                 mov eax, dword ptr [esi]
// 006da1ca  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 006da1d0  8bce                 mov ecx, esi
// 006da1d2  ffd2                 call edx
// 006da1d4  8b10                 mov edx, dword ptr [eax]
// 006da1d6  8bc8                 mov ecx, eax
// 006da1d8  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 006da1de  55                   push ebp
// 006da1df  ffd0                 call eax
// 006da1e1  8bcb                 mov ecx, ebx
// 006da1e3  47                   inc edi
// 006da1e4  e867feffff           call 0x6da050
// 006da1e9  3bf8                 cmp edi, eax
// 006da1eb  7ca8                 jl 0x6da195
// 006da1ed  5e                   pop esi
// 006da1ee  5d                   pop ebp
// 006da1ef  5f                   pop edi
// 006da1f0  5b                   pop ebx
// 006da1f1  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRows.cpp (function ?RefreshChildIndices@CXTPReportRows@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRows.cpp
