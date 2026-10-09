// roc 2009-12 008a76a0  unit: CXTPReportHeaderDragWnd  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a76a0
//
// 008a76a0  8bc1                 mov eax, ecx
// 008a76a2  33c9                 xor ecx, ecx
// 008a76a4  894808               mov dword ptr [eax + 8], ecx
// 008a76a7  89480c               mov dword ptr [eax + 0xc], ecx
// 008a76aa  894810               mov dword ptr [eax + 0x10], ecx
// 008a76ad  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008a76b1  c700bc62a000         mov dword ptr [eax], 0xa062bc
// 008a76b7  894804               mov dword ptr [eax + 4], ecx
// 008a76ba  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ??0CXTRegistryManager@@QAE@PAUHKEY__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
