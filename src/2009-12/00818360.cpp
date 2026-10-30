// roc 2009-12 00818360  unit: CRobloxReportView  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00818360
//
// 00818360  83b96c03000000       cmp dword ptr [ecx + 0x36c], 0
// 00818367  7421                 je 0x81838a
// 00818369  8b01                 mov eax, dword ptr [ecx]
// 0081836b  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00818371  ffd2                 call edx
// 00818373  8b10                 mov edx, dword ptr [eax]
// 00818375  8bc8                 mov ecx, eax
// 00818377  8b8280010000         mov eax, dword ptr [edx + 0x180]
// 0081837d  ffd0                 call eax
// 0081837f  85c0                 test eax, eax
// 00818381  7407                 je 0x81838a
// 00818383  b801000000           mov eax, 1
// 00818388  eb02                 jmp 0x81838c
// 0081838a  33c0                 xor eax, eax
// 0081838c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00818390  8b11                 mov edx, dword ptr [ecx]
// 00818392  89442404             mov dword ptr [esp + 4], eax
// 00818396  8b02                 mov eax, dword ptr [edx]
// 00818398  ffe0                 jmp eax
// copied from an identical function in another client (function ?OnUpdateEditPaste@CXTPReportView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp