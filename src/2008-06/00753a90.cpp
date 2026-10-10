// roc 2008-06 00753a90  unit: CXTPReportHeaderDropWnd  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00753a90
//
// 00753a90  8b4160               mov eax, dword ptr [ecx + 0x60]
// 00753a93  99                   cdq 
// 00753a94  2bc2                 sub eax, edx
// 00753a96  8b542408             mov edx, dword ptr [esp + 8]
// 00753a9a  6a51                 push 0x51
// 00753a9c  6a00                 push 0
// 00753a9e  d1f8                 sar eax, 1
// 00753aa0  2bd0                 sub edx, eax
// 00753aa2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00753aa6  6a00                 push 0
// 00753aa8  52                   push edx
// 00753aa9  8b15443e8000         mov edx, dword ptr [0x803e44]
// 00753aaf  83c0fa               add eax, -6
// 00753ab2  50                   push eax
// 00753ab3  52                   push edx
// 00753ab4  e88dcff4ff           call 0x6a0a46
// 00753ab9  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportDragDrop.cpp (function ?SetWindowPos@CXTPReportHeaderDropWnd@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportDragDrop.cpp
