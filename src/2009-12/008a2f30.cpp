// roc 2009-12 008a2f30  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2f30
//
// 008a2f30  8b442404             mov eax, dword ptr [esp + 4]
// 008a2f34  85c0                 test eax, eax
// 008a2f36  7c0e                 jl 0x8a2f46
// 008a2f38  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 008a2f3b  7d09                 jge 0x8a2f46
// 008a2f3d  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 008a2f40  8b0481               mov eax, dword ptr [ecx + eax*4]
// 008a2f43  c20400               ret 4
// 008a2f46  e8c10bf5ff           call 0x7f3b0c
// copied from an identical function in another client (function ?GetAt@?$CXTPArrayT@PAVCXTPReportHyperlink@@PAV1@PAUIDispatch@@@@UBEPAVCXTPReportHyperlink@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHyperlink.cpp