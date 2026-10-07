// roc 2012-06 009c0f40  unit: VCPtrList::?$CTypedPtrList  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c0f40
//
// 009c0f40  8bc1                 mov eax, ecx
// 009c0f42  33c9                 xor ecx, ecx
// 009c0f44  894804               mov dword ptr [eax + 4], ecx
// 009c0f47  89480c               mov dword ptr [eax + 0xc], ecx
// 009c0f4a  894810               mov dword ptr [eax + 0x10], ecx
// 009c0f4d  894814               mov dword ptr [eax + 0x14], ecx
// 009c0f50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c0f54  c700a41bc100         mov dword ptr [eax], 0xc11ba4
// 009c0f5a  c7400811000000       mov dword ptr [eax + 8], 0x11
// 009c0f61  894818               mov dword ptr [eax + 0x18], ecx
// 009c0f64  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??0?$CMap@JJUXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@AAU123@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
