// from server: 100% by auto
// roc 2012-06 00a30200  unit: CXTPReportHeaderDragWnd  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a30200
//
// 00a30200  56                   push esi
// 00a30201  8bf1                 mov esi, ecx
// 00a30203  e8be27f5ff           call 0x9829c6
// 00a30208  8b442408             mov eax, dword ptr [esp + 8]
// 00a3020c  894654               mov dword ptr [esi + 0x54], eax
// 00a3020f  33c0                 xor eax, eax
// 00a30211  c706cc01c200         mov dword ptr [esi], 0xc201cc
// 00a30217  89465c               mov dword ptr [esi + 0x5c], eax
// 00a3021a  c7465828e1c000       mov dword ptr [esi + 0x58], 0xc0e128
// 00a30221  894660               mov dword ptr [esi + 0x60], eax
// 00a30224  8bc6                 mov eax, esi
// 00a30226  5e                   pop esi
// 00a30227  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportDragDrop.cpp (function ??0CXTPReportHeaderDropWnd@@QAE@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportDragDrop.cpp
