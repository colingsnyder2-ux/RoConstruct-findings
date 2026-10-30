// roc 2009-12 008a6ea0  unit: CXTPReportHeaderDropWnd  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a6ea0
//
// 008a6ea0  8b4160               mov eax, dword ptr [ecx + 0x60]
// 008a6ea3  99                   cdq 
// 008a6ea4  2bc2                 sub eax, edx
// 008a6ea6  8b542408             mov edx, dword ptr [esp + 8]
// 008a6eaa  6a51                 push 0x51
// 008a6eac  6a00                 push 0
// 008a6eae  d1f8                 sar eax, 1
// 008a6eb0  2bd0                 sub edx, eax
// 008a6eb2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008a6eb6  6a00                 push 0
// 008a6eb8  52                   push edx
// 008a6eb9  8b1580d79800         mov edx, dword ptr [0x98d780]
// 008a6ebf  83c0fa               add eax, -6
// 008a6ec2  50                   push eax
// 008a6ec3  52                   push edx
// 008a6ec4  e863cdf4ff           call 0x7f3c2c
// 008a6ec9  c20800               ret 8
// copied from an identical function in another client (function ?SetWindowPos@CXTPReportHeaderDropWnd@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportDragDrop.cpp