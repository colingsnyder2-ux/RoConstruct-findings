// roc 2007-08 006d2710  unit: CXTPReportHyperlink  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2710
//
// 006d2710  56                   push esi
// 006d2711  8bf1                 mov esi, ecx
// 006d2713  e8225c0600           call 0x73833a
// 006d2718  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d271c  33c0                 xor eax, eax
// 006d271e  c7067c807d00         mov dword ptr [esi], 0x7d807c
// 006d2724  894620               mov dword ptr [esi + 0x20], eax
// 006d2727  894624               mov dword ptr [esi + 0x24], eax
// 006d272a  894628               mov dword ptr [esi + 0x28], eax
// 006d272d  89462c               mov dword ptr [esi + 0x2c], eax
// 006d2730  8b442408             mov eax, dword ptr [esp + 8]
// 006d2734  894630               mov dword ptr [esi + 0x30], eax
// 006d2737  894e34               mov dword ptr [esi + 0x34], ecx
// 006d273a  8bc6                 mov eax, esi
// 006d273c  5e                   pop esi
// 006d273d  c20800               ret 8
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportHyperlink.cpp (function ??0CXTPReportHyperlink@@QAE@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportHyperlink.cpp
