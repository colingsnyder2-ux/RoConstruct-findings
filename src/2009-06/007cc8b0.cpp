// roc 2009-06 007cc8b0  unit: CXTPReportHeaderDragWnd  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cc8b0
//
// 007cc8b0  8bc1                 mov eax, ecx
// 007cc8b2  33c9                 xor ecx, ecx
// 007cc8b4  894808               mov dword ptr [eax + 8], ecx
// 007cc8b7  89480c               mov dword ptr [eax + 0xc], ecx
// 007cc8ba  894810               mov dword ptr [eax + 0x10], ecx
// 007cc8bd  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007cc8c1  c700445e9000         mov dword ptr [eax], 0x905e44
// 007cc8c7  894804               mov dword ptr [eax + 4], ecx
// 007cc8ca  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ??0CXTRegistryManager@@QAE@PAUHKEY__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
