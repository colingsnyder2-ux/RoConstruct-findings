// roc 2012-06 00a671e0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a671e0
//
// 00a671e0  8bc1                 mov eax, ecx
// 00a671e2  33c9                 xor ecx, ecx
// 00a671e4  89480c               mov dword ptr [eax + 0xc], ecx
// 00a671e7  894810               mov dword ptr [eax + 0x10], ecx
// 00a671ea  894808               mov dword ptr [eax + 8], ecx
// 00a671ed  894804               mov dword ptr [eax + 4], ecx
// 00a671f0  894814               mov dword ptr [eax + 0x14], ecx
// 00a671f3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a671f7  c7000453c200         mov dword ptr [eax], 0xc25304
// 00a671fd  894818               mov dword ptr [eax + 0x18], ecx
// 00a67200  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarPaintManager.cpp (function ??0?$CList@PAVCXTPCalendarViewPart@@PAV1@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarPaintManager.cpp
