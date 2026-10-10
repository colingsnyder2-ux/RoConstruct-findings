// roc 2008-06 006d77e0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d77e0
//
// 006d77e0  56                   push esi
// 006d77e1  57                   push edi
// 006d77e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d77e6  8b07                 mov eax, dword ptr [edi]
// 006d77e8  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 006d77ee  8bf1                 mov esi, ecx
// 006d77f0  8bcf                 mov ecx, edi
// 006d77f2  ffd2                 call edx
// 006d77f4  8b06                 mov eax, dword ptr [esi]
// 006d77f6  8b506c               mov edx, dword ptr [eax + 0x6c]
// 006d77f9  57                   push edi
// 006d77fa  8bce                 mov ecx, esi
// 006d77fc  ffd2                 call edx
// 006d77fe  5f                   pop edi
// 006d77ff  5e                   pop esi
// 006d7800  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecords.cpp (function ?DoPropExchange@CXTPReportRecords@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecords.cpp
