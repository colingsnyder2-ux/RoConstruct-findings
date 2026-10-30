// roc 2009-12 008a2f70  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2f70
//
// 008a2f70  8b442404             mov eax, dword ptr [esp + 4]
// 008a2f74  85c0                 test eax, eax
// 008a2f76  7c0e                 jl 0x8a2f86
// 008a2f78  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 008a2f7b  7d09                 jge 0x8a2f86
// 008a2f7d  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 008a2f80  8d0481               lea eax, [ecx + eax*4]
// 008a2f83  c20400               ret 4
// 008a2f86  e8810bf5ff           call 0x7f3b0c
// copied from an identical function in another client (function ?ElementAt@?$CXTPArrayT@PAVCXTPReportHyperlink@@PAV1@PAUIDispatch@@@@UAEAAPAVCXTPReportHyperlink@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHyperlink.cpp