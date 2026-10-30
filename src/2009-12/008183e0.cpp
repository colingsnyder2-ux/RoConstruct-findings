// roc 2009-12 008183e0  unit: CRobloxReportView  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008183e0
//
// 008183e0  83b96c03000000       cmp dword ptr [ecx + 0x36c], 0
// 008183e7  7416                 je 0x8183ff
// 008183e9  8b01                 mov eax, dword ptr [ecx]
// 008183eb  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 008183f1  ffd2                 call edx
// 008183f3  8b10                 mov edx, dword ptr [eax]
// 008183f5  8bc8                 mov ecx, eax
// 008183f7  8b828c010000         mov eax, dword ptr [edx + 0x18c]
// 008183fd  ffe0                 jmp eax
// 008183ff  c3                   ret 
// copied from an identical function in another client (function ?OnEditPaste@CXTPReportView@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp