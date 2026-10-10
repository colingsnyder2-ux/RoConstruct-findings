// roc 2008-06 006c4f10  unit: XTP_REPORTRECORDITEM_DRAWARGS  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4f10
//
// 006c4f10  83b96803000000       cmp dword ptr [ecx + 0x368], 0
// 006c4f17  7416                 je 0x6c4f2f
// 006c4f19  8b01                 mov eax, dword ptr [ecx]
// 006c4f1b  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006c4f21  ffd2                 call edx
// 006c4f23  8b10                 mov edx, dword ptr [eax]
// 006c4f25  8bc8                 mov ecx, eax
// 006c4f27  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 006c4f2d  ffe0                 jmp eax
// 006c4f2f  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportView.cpp (function ?OnEditCut@CXTPReportView@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
