// roc 2008-06 0074d370  unit: CXTPReportInplaceEdit  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074d370
//
// 0074d370  8bc1                 mov eax, ecx
// 0074d372  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0074d376  8b11                 mov edx, dword ptr [ecx]
// 0074d378  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 0074d37e  8b5238               mov edx, dword ptr [edx + 0x38]
// 0074d381  50                   push eax
// 0074d382  ffd2                 call edx
// 0074d384  6a05                 push 5
// 0074d386  ff15e42b8000         call dword ptr [0x802be4]
// 0074d38c  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportInplaceControls.cpp (function ?CtlColor@CXTPReportInplaceEdit@@IAEPAUHBRUSH__@@PAVCDC@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp
