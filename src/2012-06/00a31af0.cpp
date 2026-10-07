// roc 2012-06 00a31af0  unit: CXTPDockingPaneBase  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a31af0
//
// 00a31af0  8bc1                 mov eax, ecx
// 00a31af2  33c9                 xor ecx, ecx
// 00a31af4  89480c               mov dword ptr [eax + 0xc], ecx
// 00a31af7  894810               mov dword ptr [eax + 0x10], ecx
// 00a31afa  894808               mov dword ptr [eax + 8], ecx
// 00a31afd  894804               mov dword ptr [eax + 4], ecx
// 00a31b00  894814               mov dword ptr [eax + 0x14], ecx
// 00a31b03  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a31b07  c7009006c200         mov dword ptr [eax], 0xc20690
// 00a31b0d  894818               mov dword ptr [eax + 0x18], ecx
// 00a31b10  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarPaintManager.cpp (function ??0?$CList@PAVCXTPCalendarViewPart@@PAV1@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarPaintManager.cpp
