// from server: 100% by auto
// roc 2008-06 00754290  unit: CXTPReportHeaderDragWnd  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00754290
//
// 00754290  8bc1                 mov eax, ecx
// 00754292  33c9                 xor ecx, ecx
// 00754294  894808               mov dword ptr [eax + 8], ecx
// 00754297  89480c               mov dword ptr [eax + 0xc], ecx
// 0075429a  894810               mov dword ptr [eax + 0x10], ecx
// 0075429d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007542a1  c7000c4e8600         mov dword ptr [eax], 0x864e0c
// 007542a7  894804               mov dword ptr [eax + 4], ecx
// 007542aa  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ??0CXTRegistryManager@@QAE@PAUHKEY__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
