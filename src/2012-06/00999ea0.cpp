// from server: 100% by auto
// roc 2012-06 00999ea0  unit: CXTPImageManagerResource::CBitmapDC  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00999ea0
//
// 00999ea0  8bc1                 mov eax, ecx
// 00999ea2  33c9                 xor ecx, ecx
// 00999ea4  894804               mov dword ptr [eax + 4], ecx
// 00999ea7  89480c               mov dword ptr [eax + 0xc], ecx
// 00999eaa  894810               mov dword ptr [eax + 0x10], ecx
// 00999ead  894814               mov dword ptr [eax + 0x14], ecx
// 00999eb0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00999eb4  c70068e7c000         mov dword ptr [eax], 0xc0e768
// 00999eba  c7400811000000       mov dword ptr [eax + 8], 0x11
// 00999ec1  894818               mov dword ptr [eax + 0x18], ecx
// 00999ec4  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??0?$CMap@JJUXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@AAU123@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
