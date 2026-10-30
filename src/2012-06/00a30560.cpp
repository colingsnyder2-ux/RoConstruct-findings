// from server: 100% by auto
// roc 2012-06 00a30560  unit: CXTPReportHyperlink  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a30560
//
// 00a30560  56                   push esi
// 00a30561  8bf1                 mov esi, ecx
// 00a30563  e81c900600           call 0xa99584
// 00a30568  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a3056c  33c0                 xor eax, eax
// 00a3056e  c7062404c200         mov dword ptr [esi], 0xc20424
// 00a30574  894620               mov dword ptr [esi + 0x20], eax
// 00a30577  894624               mov dword ptr [esi + 0x24], eax
// 00a3057a  894628               mov dword ptr [esi + 0x28], eax
// 00a3057d  89462c               mov dword ptr [esi + 0x2c], eax
// 00a30580  8b442408             mov eax, dword ptr [esp + 8]
// 00a30584  894630               mov dword ptr [esi + 0x30], eax
// 00a30587  894e34               mov dword ptr [esi + 0x34], ecx
// 00a3058a  8bc6                 mov eax, esi
// 00a3058c  5e                   pop esi
// 00a3058d  c20800               ret 8
// library xtp-15.2.1/Source\ReportControl\XTPReportHyperlink.cpp (function ??0CXTPReportHyperlink@@QAE@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportHyperlink.cpp
