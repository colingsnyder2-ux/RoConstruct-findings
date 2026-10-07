// roc 2012-06 00a16080  unit: CXTPHookManagerHookAble  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a16080
//
// 00a16080  8bc1                 mov eax, ecx
// 00a16082  33c9                 xor ecx, ecx
// 00a16084  894804               mov dword ptr [eax + 4], ecx
// 00a16087  89480c               mov dword ptr [eax + 0xc], ecx
// 00a1608a  894810               mov dword ptr [eax + 0x10], ecx
// 00a1608d  894814               mov dword ptr [eax + 0x14], ecx
// 00a16090  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a16094  c700a8d4c100         mov dword ptr [eax], 0xc1d4a8
// 00a1609a  c7400811000000       mov dword ptr [eax + 8], 0x11
// 00a160a1  894818               mov dword ptr [eax + 0x18], ecx
// 00a160a4  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??0?$CMap@JJUXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@AAU123@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
