// roc 2009-12 0082cae0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082cae0
//
// 0082cae0  56                   push esi
// 0082cae1  57                   push edi
// 0082cae2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0082cae6  8b07                 mov eax, dword ptr [edi]
// 0082cae8  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 0082caee  8bf1                 mov esi, ecx
// 0082caf0  8bcf                 mov ecx, edi
// 0082caf2  ffd2                 call edx
// 0082caf4  8b06                 mov eax, dword ptr [esi]
// 0082caf6  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0082caf9  57                   push edi
// 0082cafa  8bce                 mov ecx, esi
// 0082cafc  ffd2                 call edx
// 0082cafe  5f                   pop edi
// 0082caff  5e                   pop esi
// 0082cb00  c20400               ret 4
// copied from an identical function in another client (function ?DoPropExchange@CXTPReportRecords@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecords.cpp