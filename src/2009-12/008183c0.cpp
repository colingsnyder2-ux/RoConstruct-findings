// roc 2009-12 008183c0  unit: CRobloxReportView  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008183c0
//
// 008183c0  8b01                 mov eax, dword ptr [ecx]
// 008183c2  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 008183c8  ffd2                 call edx
// 008183ca  8b10                 mov edx, dword ptr [eax]
// 008183cc  8bc8                 mov ecx, eax
// 008183ce  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 008183d4  ffe0                 jmp eax
// copied from an identical function in another client (function ?OnEditCopy@CXTPReportView@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp