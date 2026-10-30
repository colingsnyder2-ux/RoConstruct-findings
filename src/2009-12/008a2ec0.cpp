// roc 2009-12 008a2ec0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2ec0
//
// 008a2ec0  8b01                 mov eax, dword ptr [ecx]
// 008a2ec2  8b4078               mov eax, dword ptr [eax + 0x78]
// 008a2ec5  ffe0                 jmp eax
// copied from an identical function in another client (function ?OleAdd@?$CXTPArrayT@PAVCXTPReportHyperlink@@PAV1@PAUIDispatch@@@@MAEXPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHyperlink.cpp