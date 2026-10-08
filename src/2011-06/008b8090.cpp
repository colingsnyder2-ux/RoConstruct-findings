// from server: 100% by auto
// roc 2011-06 008b8090  unit: CXTPReportHyperlink  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8090
//
// 008b8090  56                   push esi
// 008b8091  8bf1                 mov esi, ecx
// 008b8093  e832451100           call 0x9cc5ca
// 008b8098  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008b809c  33c0                 xor eax, eax
// 008b809e  c706944dad00         mov dword ptr [esi], 0xad4d94
// 008b80a4  894620               mov dword ptr [esi + 0x20], eax
// 008b80a7  894624               mov dword ptr [esi + 0x24], eax
// 008b80aa  894628               mov dword ptr [esi + 0x28], eax
// 008b80ad  89462c               mov dword ptr [esi + 0x2c], eax
// 008b80b0  8b442408             mov eax, dword ptr [esp + 8]
// 008b80b4  894630               mov dword ptr [esi + 0x30], eax
// 008b80b7  894e34               mov dword ptr [esi + 0x34], ecx
// 008b80ba  8bc6                 mov eax, esi
// 008b80bc  5e                   pop esi
// 008b80bd  c20800               ret 8
// library xtp-15.2.1/Source\ReportControl\XTPReportHyperlink.cpp (function ??0CXTPReportHyperlink@@QAE@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportHyperlink.cpp
