// roc 2008-06 006c4ed0  unit: XTP_REPORTRECORDITEM_DRAWARGS  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4ed0
//
// 006c4ed0  83b96c03000000       cmp dword ptr [ecx + 0x36c], 0
// 006c4ed7  7421                 je 0x6c4efa
// 006c4ed9  8b01                 mov eax, dword ptr [ecx]
// 006c4edb  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006c4ee1  ffd2                 call edx
// 006c4ee3  8b10                 mov edx, dword ptr [eax]
// 006c4ee5  8bc8                 mov ecx, eax
// 006c4ee7  8b8280010000         mov eax, dword ptr [edx + 0x180]
// 006c4eed  ffd0                 call eax
// 006c4eef  85c0                 test eax, eax
// 006c4ef1  7407                 je 0x6c4efa
// 006c4ef3  b801000000           mov eax, 1
// 006c4ef8  eb02                 jmp 0x6c4efc
// 006c4efa  33c0                 xor eax, eax
// 006c4efc  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c4f00  8b11                 mov edx, dword ptr [ecx]
// 006c4f02  89442404             mov dword ptr [esp + 4], eax
// 006c4f06  8b02                 mov eax, dword ptr [edx]
// 006c4f08  ffe0                 jmp eax
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportView.cpp (function ?OnUpdateEditPaste@CXTPReportView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
