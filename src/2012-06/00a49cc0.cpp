// roc 2012-06 00a49cc0  unit: CXTPShadowsManager::CShadowWnd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a49cc0
//
// 00a49cc0  8bc1                 mov eax, ecx
// 00a49cc2  33c9                 xor ecx, ecx
// 00a49cc4  89480c               mov dword ptr [eax + 0xc], ecx
// 00a49cc7  894810               mov dword ptr [eax + 0x10], ecx
// 00a49cca  894808               mov dword ptr [eax + 8], ecx
// 00a49ccd  894804               mov dword ptr [eax + 4], ecx
// 00a49cd0  894814               mov dword ptr [eax + 0x14], ecx
// 00a49cd3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a49cd7  c700942cc200         mov dword ptr [eax], 0xc22c94
// 00a49cdd  894818               mov dword ptr [eax + 0x18], ecx
// 00a49ce0  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarPaintManager.cpp (function ??0?$CList@PAVCXTPCalendarViewPart@@PAV1@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarPaintManager.cpp
