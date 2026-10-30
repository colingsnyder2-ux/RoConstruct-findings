// roc 2009-12 008a1450  unit: CXTPReportInplaceEdit  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a1450
//
// 008a1450  8bc1                 mov eax, ecx
// 008a1452  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008a1456  8b11                 mov edx, dword ptr [ecx]
// 008a1458  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 008a145e  8b5238               mov edx, dword ptr [edx + 0x38]
// 008a1461  50                   push eax
// 008a1462  ffd2                 call edx
// 008a1464  6a05                 push 5
// 008a1466  ff1564cb9800         call dword ptr [0x98cb64]
// 008a146c  c20800               ret 8
// copied from an identical function in another client (function ?CtlColor@CXTPReportInplaceEdit@@IAEPAUHBRUSH__@@PAVCDC@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp