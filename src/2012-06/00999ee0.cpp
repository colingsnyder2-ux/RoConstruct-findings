// from server: 100% by auto
// roc 2012-06 00999ee0  unit: CXTPImageManagerResource::CBitmapDC  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00999ee0
//
// 00999ee0  8bc1                 mov eax, ecx
// 00999ee2  33c9                 xor ecx, ecx
// 00999ee4  894804               mov dword ptr [eax + 4], ecx
// 00999ee7  89480c               mov dword ptr [eax + 0xc], ecx
// 00999eea  894810               mov dword ptr [eax + 0x10], ecx
// 00999eed  894814               mov dword ptr [eax + 0x14], ecx
// 00999ef0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00999ef4  c700c4e6c000         mov dword ptr [eax], 0xc0e6c4
// 00999efa  c7400811000000       mov dword ptr [eax + 8], 0x11
// 00999f01  894818               mov dword ptr [eax + 0x18], ecx
// 00999f04  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??0?$CMap@JJUXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@AAU123@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
