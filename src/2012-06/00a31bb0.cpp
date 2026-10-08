// from server: 100% by auto
// roc 2012-06 00a31bb0  unit: CXTPDockingPaneBase  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a31bb0
//
// 00a31bb0  8bc1                 mov eax, ecx
// 00a31bb2  33c9                 xor ecx, ecx
// 00a31bb4  894804               mov dword ptr [eax + 4], ecx
// 00a31bb7  89480c               mov dword ptr [eax + 0xc], ecx
// 00a31bba  894810               mov dword ptr [eax + 0x10], ecx
// 00a31bbd  894814               mov dword ptr [eax + 0x14], ecx
// 00a31bc0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a31bc4  c700a806c200         mov dword ptr [eax], 0xc206a8
// 00a31bca  c7400811000000       mov dword ptr [eax + 8], 0x11
// 00a31bd1  894818               mov dword ptr [eax + 0x18], ecx
// 00a31bd4  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??0?$CMap@JJUXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@AAU123@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
