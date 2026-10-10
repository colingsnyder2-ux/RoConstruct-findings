// roc 2008-06 006c4e60  unit: XTP_REPORTRECORDITEM_DRAWARGS  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4e60
//
// 006c4e60  8b01                 mov eax, dword ptr [ecx]
// 006c4e62  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006c4e68  56                   push esi
// 006c4e69  57                   push edi
// 006c4e6a  ffd2                 call edx
// 006c4e6c  8b10                 mov edx, dword ptr [eax]
// 006c4e6e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c4e72  8b3e                 mov edi, dword ptr [esi]
// 006c4e74  8bc8                 mov ecx, eax
// 006c4e76  8b827c010000         mov eax, dword ptr [edx + 0x17c]
// 006c4e7c  ffd0                 call eax
// 006c4e7e  8b17                 mov edx, dword ptr [edi]
// 006c4e80  50                   push eax
// 006c4e81  8bce                 mov ecx, esi
// 006c4e83  ffd2                 call edx
// 006c4e85  5f                   pop edi
// 006c4e86  5e                   pop esi
// 006c4e87  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportView.cpp (function ?OnUpdateEditCopy@CXTPReportView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
