// roc 2008-06 006c4e90  unit: XTP_REPORTRECORDITEM_DRAWARGS  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4e90
//
// 006c4e90  83b96803000000       cmp dword ptr [ecx + 0x368], 0
// 006c4e97  7421                 je 0x6c4eba
// 006c4e99  8b01                 mov eax, dword ptr [ecx]
// 006c4e9b  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006c4ea1  ffd2                 call edx
// 006c4ea3  8b10                 mov edx, dword ptr [eax]
// 006c4ea5  8bc8                 mov ecx, eax
// 006c4ea7  8b8278010000         mov eax, dword ptr [edx + 0x178]
// 006c4ead  ffd0                 call eax
// 006c4eaf  85c0                 test eax, eax
// 006c4eb1  7407                 je 0x6c4eba
// 006c4eb3  b801000000           mov eax, 1
// 006c4eb8  eb02                 jmp 0x6c4ebc
// 006c4eba  33c0                 xor eax, eax
// 006c4ebc  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c4ec0  8b11                 mov edx, dword ptr [ecx]
// 006c4ec2  89442404             mov dword ptr [esp + 4], eax
// 006c4ec6  8b02                 mov eax, dword ptr [edx]
// 006c4ec8  ffe0                 jmp eax
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportView.cpp (function ?OnUpdateEditCut@CXTPReportView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
