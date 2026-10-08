// roc 2010-06 0085b7f0  unit: CXTPReportHeaderDragWnd  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085b7f0
//
// 0085b7f0  8bc1                 mov eax, ecx
// 0085b7f2  33c9                 xor ecx, ecx
// 0085b7f4  894808               mov dword ptr [eax + 8], ecx
// 0085b7f7  89480c               mov dword ptr [eax + 0xc], ecx
// 0085b7fa  894810               mov dword ptr [eax + 0x10], ecx
// 0085b7fd  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0085b801  c700a4a5a600         mov dword ptr [eax], 0xa6a5a4
// 0085b807  894804               mov dword ptr [eax + 4], ecx
// 0085b80a  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ??0CXTRegistryManager@@QAE@PAUHKEY__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
