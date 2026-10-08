// roc 2012-06 00a30ea0  unit: CXTPReportHyperlinks  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a30ea0
//
// 00a30ea0  8bc1                 mov eax, ecx
// 00a30ea2  33c9                 xor ecx, ecx
// 00a30ea4  894808               mov dword ptr [eax + 8], ecx
// 00a30ea7  89480c               mov dword ptr [eax + 0xc], ecx
// 00a30eaa  894810               mov dword ptr [eax + 0x10], ecx
// 00a30ead  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a30eb1  c7005006c200         mov dword ptr [eax], 0xc20650
// 00a30eb7  894804               mov dword ptr [eax + 4], ecx
// 00a30eba  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ??0CXTRegistryManager@@QAE@PAUHKEY__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
