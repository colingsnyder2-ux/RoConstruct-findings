// roc 2008-06 0074eb70  unit: CXTPReportHyperlink  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074eb70
//
// 0074eb70  56                   push esi
// 0074eb71  8bf1                 mov esi, ecx
// 0074eb73  e832d40600           call 0x7bbfaa
// 0074eb78  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0074eb7c  33c0                 xor eax, eax
// 0074eb7e  c70614438600         mov dword ptr [esi], 0x864314
// 0074eb84  894620               mov dword ptr [esi + 0x20], eax
// 0074eb87  894624               mov dword ptr [esi + 0x24], eax
// 0074eb8a  894628               mov dword ptr [esi + 0x28], eax
// 0074eb8d  89462c               mov dword ptr [esi + 0x2c], eax
// 0074eb90  8b442408             mov eax, dword ptr [esp + 8]
// 0074eb94  894630               mov dword ptr [esi + 0x30], eax
// 0074eb97  894e34               mov dword ptr [esi + 0x34], ecx
// 0074eb9a  8bc6                 mov eax, esi
// 0074eb9c  5e                   pop esi
// 0074eb9d  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHyperlink.cpp (function ??0CXTPReportHyperlink@@QAE@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHyperlink.cpp
