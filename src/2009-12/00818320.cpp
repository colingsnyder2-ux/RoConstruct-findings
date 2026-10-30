// roc 2009-12 00818320  unit: CRobloxReportView  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00818320
//
// 00818320  83b96803000000       cmp dword ptr [ecx + 0x368], 0
// 00818327  7421                 je 0x81834a
// 00818329  8b01                 mov eax, dword ptr [ecx]
// 0081832b  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00818331  ffd2                 call edx
// 00818333  8b10                 mov edx, dword ptr [eax]
// 00818335  8bc8                 mov ecx, eax
// 00818337  8b8278010000         mov eax, dword ptr [edx + 0x178]
// 0081833d  ffd0                 call eax
// 0081833f  85c0                 test eax, eax
// 00818341  7407                 je 0x81834a
// 00818343  b801000000           mov eax, 1
// 00818348  eb02                 jmp 0x81834c
// 0081834a  33c0                 xor eax, eax
// 0081834c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00818350  8b11                 mov edx, dword ptr [ecx]
// 00818352  89442404             mov dword ptr [esp + 4], eax
// 00818356  8b02                 mov eax, dword ptr [edx]
// 00818358  ffe0                 jmp eax
// copied from an identical function in another client (function ?OnUpdateEditCut@CXTPReportView@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp