// roc 2012-06 009c7540  unit: CXTPDockingPaneManager  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c7540
//
// 009c7540  8bc1                 mov eax, ecx
// 009c7542  33c9                 xor ecx, ecx
// 009c7544  89480c               mov dword ptr [eax + 0xc], ecx
// 009c7547  894810               mov dword ptr [eax + 0x10], ecx
// 009c754a  894808               mov dword ptr [eax + 8], ecx
// 009c754d  894804               mov dword ptr [eax + 4], ecx
// 009c7550  894814               mov dword ptr [eax + 0x14], ecx
// 009c7553  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c7557  c7005036c100         mov dword ptr [eax], 0xc13650
// 009c755d  894818               mov dword ptr [eax + 0x18], ecx
// 009c7560  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarPaintManager.cpp (function ??0?$CList@PAVCXTPCalendarViewPart@@PAV1@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarPaintManager.cpp
