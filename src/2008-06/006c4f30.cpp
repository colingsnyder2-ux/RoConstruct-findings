// roc 2008-06 006c4f30  unit: XTP_REPORTRECORDITEM_DRAWARGS  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4f30
//
// 006c4f30  8b01                 mov eax, dword ptr [ecx]
// 006c4f32  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006c4f38  ffd2                 call edx
// 006c4f3a  8b10                 mov edx, dword ptr [eax]
// 006c4f3c  8bc8                 mov ecx, eax
// 006c4f3e  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 006c4f44  ffe0                 jmp eax
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportView.cpp (function ?OnEditCopy@CXTPReportView@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
