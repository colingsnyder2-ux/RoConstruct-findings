// from server: 100% by auto
// roc 2008-06 00753a70  unit: CXTPReportHeaderDropWnd  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00753a70
//
// 00753a70  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00753a73  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 00753a76  50                   push eax
// 00753a77  51                   push ecx
// 00753a78  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00753a7c  6a0c                 push 0xc
// 00753a7e  6a00                 push 0
// 00753a80  6a00                 push 0
// 00753a82  e8b9850600           call 0x7bc040
// 00753a87  b801000000           mov eax, 1
// 00753a8c  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportDragDrop.cpp (function ?OnEraseBkgnd@CXTPReportHeaderDropWnd@@IAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportDragDrop.cpp
