// roc 2009-12 008183a0  unit: CRobloxReportView  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008183a0
//
// 008183a0  83b96803000000       cmp dword ptr [ecx + 0x368], 0
// 008183a7  7416                 je 0x8183bf
// 008183a9  8b01                 mov eax, dword ptr [ecx]
// 008183ab  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 008183b1  ffd2                 call edx
// 008183b3  8b10                 mov edx, dword ptr [eax]
// 008183b5  8bc8                 mov ecx, eax
// 008183b7  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 008183bd  ffe0                 jmp eax
// 008183bf  c3                   ret 
// copied from an identical function in another client (function ?OnEditCut@CXTPReportView@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp