// from server: 100% by auto
// roc 2011-06 008b7820  unit: CXTPReportHeaderDropWnd  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b7820
//
// 008b7820  8b4154               mov eax, dword ptr [ecx + 0x54]
// 008b7823  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 008b7826  50                   push eax
// 008b7827  51                   push ecx
// 008b7828  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008b782c  6a0c                 push 0xc
// 008b782e  6a00                 push 0
// 008b7830  6a00                 push 0
// 008b7832  e89f4d1100           call 0x9cc5d6
// 008b7837  b801000000           mov eax, 1
// 008b783c  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportDragDrop.cpp (function ?OnEraseBkgnd@CXTPReportHeaderDropWnd@@IAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportDragDrop.cpp
