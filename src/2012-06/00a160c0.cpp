// roc 2012-06 00a160c0  unit: CXTPHookManagerHookAble  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a160c0
//
// 00a160c0  8bc1                 mov eax, ecx
// 00a160c2  33c9                 xor ecx, ecx
// 00a160c4  89480c               mov dword ptr [eax + 0xc], ecx
// 00a160c7  894810               mov dword ptr [eax + 0x10], ecx
// 00a160ca  894808               mov dword ptr [eax + 8], ecx
// 00a160cd  894804               mov dword ptr [eax + 4], ecx
// 00a160d0  894814               mov dword ptr [eax + 0x14], ecx
// 00a160d3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a160d7  c700c0d4c100         mov dword ptr [eax], 0xc1d4c0
// 00a160dd  894818               mov dword ptr [eax + 0x18], ecx
// 00a160e0  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarPaintManager.cpp (function ??0?$CList@PAVCXTPCalendarViewPart@@PAV1@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarPaintManager.cpp
