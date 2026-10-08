// from server: 100% by auto
// roc 2012-06 00a47290  unit: CXTPDockingPaneContext  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a47290
//
// 00a47290  8bc1                 mov eax, ecx
// 00a47292  33c9                 xor ecx, ecx
// 00a47294  894804               mov dword ptr [eax + 4], ecx
// 00a47297  89480c               mov dword ptr [eax + 0xc], ecx
// 00a4729a  894810               mov dword ptr [eax + 0x10], ecx
// 00a4729d  894814               mov dword ptr [eax + 0x14], ecx
// 00a472a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a472a4  c7004c2ac200         mov dword ptr [eax], 0xc22a4c
// 00a472aa  c7400811000000       mov dword ptr [eax + 8], 0x11
// 00a472b1  894818               mov dword ptr [eax + 0x18], ecx
// 00a472b4  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??0?$CMap@JJUXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@AAU123@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
