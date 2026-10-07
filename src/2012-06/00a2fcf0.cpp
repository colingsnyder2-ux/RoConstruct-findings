// roc 2012-06 00a2fcf0  unit: CXTPReportHeaderDropWnd  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2fcf0
//
// 00a2fcf0  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00a2fcf3  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 00a2fcf6  50                   push eax
// 00a2fcf7  51                   push ecx
// 00a2fcf8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a2fcfc  6a0c                 push 0xc
// 00a2fcfe  6a00                 push 0
// 00a2fd00  6a00                 push 0
// 00a2fd02  e889980600           call 0xa99590
// 00a2fd07  b801000000           mov eax, 1
// 00a2fd0c  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportDragDrop.cpp (function ?OnEraseBkgnd@CXTPReportHeaderDropWnd@@IAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportDragDrop.cpp
