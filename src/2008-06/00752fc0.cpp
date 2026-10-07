// roc 2008-06 00752fc0  unit: CXTPReportTip  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00752fc0
//
// 00752fc0  56                   push esi
// 00752fc1  8bf1                 mov esi, ecx
// 00752fc3  e8e28f0600           call 0x7bbfaa
// 00752fc8  8b442408             mov eax, dword ptr [esp + 8]
// 00752fcc  894620               mov dword ptr [esi + 0x20], eax
// 00752fcf  33c0                 xor eax, eax
// 00752fd1  894624               mov dword ptr [esi + 0x24], eax
// 00752fd4  894628               mov dword ptr [esi + 0x28], eax
// 00752fd7  c7066c4a8600         mov dword ptr [esi], 0x864a6c
// 00752fdd  8bc6                 mov eax, esi
// 00752fdf  5e                   pop esi
// 00752fe0  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportNavigator.cpp (function ??0CXTPReportNavigator@@QAE@PAVCXTPReportControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportNavigator.cpp
