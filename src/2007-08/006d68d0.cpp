// roc 2007-08 006d68d0  unit: CXTPReportHeaderDropWnd  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d68d0
//
// 006d68d0  8b4154               mov eax, dword ptr [ecx + 0x54]
// 006d68d3  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 006d68d6  50                   push eax
// 006d68d7  51                   push ecx
// 006d68d8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d68dc  6a0c                 push 0xc
// 006d68de  6a00                 push 0
// 006d68e0  6a00                 push 0
// 006d68e2  e8e31a0600           call 0x7383ca
// 006d68e7  b801000000           mov eax, 1
// 006d68ec  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportDragDrop.cpp (function ?OnEraseBkgnd@CXTPReportHeaderDropWnd@@IAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportDragDrop.cpp
