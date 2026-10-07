// roc 2012-06 00a47250  unit: CXTPDockingPaneContext  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a47250
//
// 00a47250  8bc1                 mov eax, ecx
// 00a47252  33c9                 xor ecx, ecx
// 00a47254  89480c               mov dword ptr [eax + 0xc], ecx
// 00a47257  894810               mov dword ptr [eax + 0x10], ecx
// 00a4725a  894808               mov dword ptr [eax + 8], ecx
// 00a4725d  894804               mov dword ptr [eax + 4], ecx
// 00a47260  894814               mov dword ptr [eax + 0x14], ecx
// 00a47263  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a47267  c700342ac200         mov dword ptr [eax], 0xc22a34
// 00a4726d  894818               mov dword ptr [eax + 0x18], ecx
// 00a47270  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarPaintManager.cpp (function ??0?$CList@PAVCXTPCalendarViewPart@@PAV1@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarPaintManager.cpp
