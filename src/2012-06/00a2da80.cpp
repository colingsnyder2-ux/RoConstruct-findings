// roc 2012-06 00a2da80  unit: CXTPReportInplaceEdit  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2da80
//
// 00a2da80  8bc1                 mov eax, ecx
// 00a2da82  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a2da86  8b11                 mov edx, dword ptr [ecx]
// 00a2da88  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 00a2da8e  8b5238               mov edx, dword ptr [edx + 0x38]
// 00a2da91  50                   push eax
// 00a2da92  ffd2                 call edx
// 00a2da94  6a05                 push 5
// 00a2da96  ff15783cb200         call dword ptr [0xb23c78]
// 00a2da9c  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\ReportControl\XTPReportInplaceEdit.cpp (function ?CtlColor@CXTPReportInplaceEdit@@IAEPAUHBRUSH__@@PAVCDC@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/ReportControl/XTPReportInplaceEdit.cpp
