// roc 2012-06 00a2f240  unit: CXTPReportInplaceList  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2f240
//
// 00a2f240  56                   push esi
// 00a2f241  8bf1                 mov esi, ecx
// 00a2f243  e83ca30600           call 0xa99584
// 00a2f248  8b442408             mov eax, dword ptr [esp + 8]
// 00a2f24c  894620               mov dword ptr [esi + 0x20], eax
// 00a2f24f  33c0                 xor eax, eax
// 00a2f251  894624               mov dword ptr [esi + 0x24], eax
// 00a2f254  894628               mov dword ptr [esi + 0x28], eax
// 00a2f257  c7061c00c200         mov dword ptr [esi], 0xc2001c
// 00a2f25d  8bc6                 mov eax, esi
// 00a2f25f  5e                   pop esi
// 00a2f260  c20400               ret 4
// library xtp-13.2.1/Source\ReportControl\XTPReportNavigator.cpp (function ??0CXTPReportNavigator@@QAE@PAVCXTPReportControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/ReportControl/XTPReportNavigator.cpp
