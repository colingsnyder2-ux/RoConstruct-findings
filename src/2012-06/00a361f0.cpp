// roc 2012-06 00a361f0  unit: CXTPDockingPaneWindowSelect  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a361f0
//
// 00a361f0  8bc1                 mov eax, ecx
// 00a361f2  33c9                 xor ecx, ecx
// 00a361f4  894804               mov dword ptr [eax + 4], ecx
// 00a361f7  89480c               mov dword ptr [eax + 0xc], ecx
// 00a361fa  894810               mov dword ptr [eax + 0x10], ecx
// 00a361fd  894814               mov dword ptr [eax + 0x14], ecx
// 00a36200  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a36204  c700ec0ec200         mov dword ptr [eax], 0xc20eec
// 00a3620a  c7400811000000       mov dword ptr [eax + 8], 0x11
// 00a36211  894818               mov dword ptr [eax + 0x18], ecx
// 00a36214  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??0?$CMap@JJUXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@AAU123@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
