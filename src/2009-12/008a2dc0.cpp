// roc 2009-12 008a2dc0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2dc0
//
// 008a2dc0  56                   push esi
// 008a2dc1  57                   push edi
// 008a2dc2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008a2dc6  8bf1                 mov esi, ecx
// 008a2dc8  8b06                 mov eax, dword ptr [esi]
// 008a2dca  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008a2dd0  57                   push edi
// 008a2dd1  ffd2                 call edx
// 008a2dd3  85c0                 test eax, eax
// 008a2dd5  7d0a                 jge 0x8a2de1
// 008a2dd7  8b06                 mov eax, dword ptr [esi]
// 008a2dd9  8b5078               mov edx, dword ptr [eax + 0x78]
// 008a2ddc  57                   push edi
// 008a2ddd  8bce                 mov ecx, esi
// 008a2ddf  ffd2                 call edx
// 008a2de1  5f                   pop edi
// 008a2de2  5e                   pop esi
// 008a2de3  c20400               ret 4
// copied from an identical function in another client (function ?AddIfNeed@?$CXTPArrayT@PAVCXTPReportHyperlink@@PAV1@PAUIDispatch@@@@UAEXPAVCXTPReportHyperlink@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHyperlink.cpp