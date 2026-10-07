// roc 2012-06 009e2e60  unit: CXTPPropertyGrid  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e2e60
//
// 009e2e60  8bc1                 mov eax, ecx
// 009e2e62  33c9                 xor ecx, ecx
// 009e2e64  894804               mov dword ptr [eax + 4], ecx
// 009e2e67  89480c               mov dword ptr [eax + 0xc], ecx
// 009e2e6a  894810               mov dword ptr [eax + 0x10], ecx
// 009e2e6d  894814               mov dword ptr [eax + 0x14], ecx
// 009e2e70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009e2e74  c700d03cb500         mov dword ptr [eax], 0xb53cd0
// 009e2e7a  c7400811000000       mov dword ptr [eax + 8], 0x11
// 009e2e81  894818               mov dword ptr [eax + 0x18], ecx
// 009e2e84  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??0?$CMap@JJUXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@AAU123@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
