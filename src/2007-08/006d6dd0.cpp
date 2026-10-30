// from server: 100% by auto
// roc 2007-08 006d6dd0  unit: CXTPReportHeaderDragWnd  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d6dd0
//
// 006d6dd0  56                   push esi
// 006d6dd1  8bf1                 mov esi, ecx
// 006d6dd3  e80298f5ff           call 0x6305da
// 006d6dd8  8b442408             mov eax, dword ptr [esp + 8]
// 006d6ddc  894654               mov dword ptr [esi + 0x54], eax
// 006d6ddf  33c0                 xor eax, eax
// 006d6de1  c7064c897d00         mov dword ptr [esi], 0x7d894c
// 006d6de7  89465c               mov dword ptr [esi + 0x5c], eax
// 006d6dea  c7465804677c00       mov dword ptr [esi + 0x58], 0x7c6704
// 006d6df1  894660               mov dword ptr [esi + 0x60], eax
// 006d6df4  8bc6                 mov eax, esi
// 006d6df6  5e                   pop esi
// 006d6df7  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportDragDrop.cpp (function ??0CXTPReportHeaderDropWnd@@QAE@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportDragDrop.cpp
