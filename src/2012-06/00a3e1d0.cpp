// from server: 100% by auto
// roc 2012-06 00a3e1d0  unit: CXTPDockingPaneSplitterContainer  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3e1d0
//
// 00a3e1d0  8bc1                 mov eax, ecx
// 00a3e1d2  33c9                 xor ecx, ecx
// 00a3e1d4  89480c               mov dword ptr [eax + 0xc], ecx
// 00a3e1d7  894810               mov dword ptr [eax + 0x10], ecx
// 00a3e1da  894808               mov dword ptr [eax + 8], ecx
// 00a3e1dd  894804               mov dword ptr [eax + 4], ecx
// 00a3e1e0  894814               mov dword ptr [eax + 0x14], ecx
// 00a3e1e3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a3e1e7  c700681dc200         mov dword ptr [eax], 0xc21d68
// 00a3e1ed  894818               mov dword ptr [eax + 0x18], ecx
// 00a3e1f0  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarPaintManager.cpp (function ??0?$CList@PAVCXTPCalendarViewPart@@PAV1@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarPaintManager.cpp
