// roc 2008-06 00753f80  unit: CXTPReportHeaderDragWnd  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00753f80
//
// 00753f80  56                   push esi
// 00753f81  8bf1                 mov esi, ecx
// 00753f83  e808cff4ff           call 0x6a0e90
// 00753f88  8b442408             mov eax, dword ptr [esp + 8]
// 00753f8c  894654               mov dword ptr [esi + 0x54], eax
// 00753f8f  33c0                 xor eax, eax
// 00753f91  c7061c4c8600         mov dword ptr [esi], 0x864c1c
// 00753f97  89465c               mov dword ptr [esi + 0x5c], eax
// 00753f9a  c74658401b8500       mov dword ptr [esi + 0x58], 0x851b40
// 00753fa1  894660               mov dword ptr [esi + 0x60], eax
// 00753fa4  8bc6                 mov eax, esi
// 00753fa6  5e                   pop esi
// 00753fa7  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportDragDrop.cpp (function ??0CXTPReportHeaderDropWnd@@QAE@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportDragDrop.cpp
