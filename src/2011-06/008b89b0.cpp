// roc 2011-06 008b89b0  unit: CXTPReportHyperlinks  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b89b0
//
// 008b89b0  8bc1                 mov eax, ecx
// 008b89b2  33c9                 xor ecx, ecx
// 008b89b4  894808               mov dword ptr [eax + 8], ecx
// 008b89b7  89480c               mov dword ptr [eax + 0xc], ecx
// 008b89ba  894810               mov dword ptr [eax + 0x10], ecx
// 008b89bd  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008b89c1  c700c04fad00         mov dword ptr [eax], 0xad4fc0
// 008b89c7  894804               mov dword ptr [eax + 4], ecx
// 008b89ca  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ??0CXTRegistryManager@@QAE@PAUHKEY__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
