// roc 2008-06 006c4f50  unit: XTP_REPORTRECORDITEM_DRAWARGS  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4f50
//
// 006c4f50  83b96c03000000       cmp dword ptr [ecx + 0x36c], 0
// 006c4f57  7416                 je 0x6c4f6f
// 006c4f59  8b01                 mov eax, dword ptr [ecx]
// 006c4f5b  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006c4f61  ffd2                 call edx
// 006c4f63  8b10                 mov edx, dword ptr [eax]
// 006c4f65  8bc8                 mov ecx, eax
// 006c4f67  8b828c010000         mov eax, dword ptr [edx + 0x18c]
// 006c4f6d  ffe0                 jmp eax
// 006c4f6f  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportView.cpp (function ?OnEditPaste@CXTPReportView@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
