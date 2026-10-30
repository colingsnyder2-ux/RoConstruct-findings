// roc 2009-12 008a2f50  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2f50
//
// 008a2f50  8b442404             mov eax, dword ptr [esp + 4]
// 008a2f54  85c0                 test eax, eax
// 008a2f56  7c12                 jl 0x8a2f6a
// 008a2f58  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 008a2f5b  7d0d                 jge 0x8a2f6a
// 008a2f5d  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 008a2f60  8b542408             mov edx, dword ptr [esp + 8]
// 008a2f64  891481               mov dword ptr [ecx + eax*4], edx
// 008a2f67  c20800               ret 8
// 008a2f6a  e89d0bf5ff           call 0x7f3b0c
// copied from an identical function in another client (function ?SetAt@?$CXTPArrayT@PAVCXTPReportHyperlink@@PAV1@PAUIDispatch@@@@UAEXHPAVCXTPReportHyperlink@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHyperlink.cpp