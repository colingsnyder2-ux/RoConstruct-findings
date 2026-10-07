// roc 2012-06 00a68760  unit: CXTShadowWnd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a68760
//
// 00a68760  8bc1                 mov eax, ecx
// 00a68762  33c9                 xor ecx, ecx
// 00a68764  89480c               mov dword ptr [eax + 0xc], ecx
// 00a68767  894810               mov dword ptr [eax + 0x10], ecx
// 00a6876a  894808               mov dword ptr [eax + 8], ecx
// 00a6876d  894804               mov dword ptr [eax + 4], ecx
// 00a68770  894814               mov dword ptr [eax + 0x14], ecx
// 00a68773  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a68777  c7001c57c200         mov dword ptr [eax], 0xc2571c
// 00a6877d  894818               mov dword ptr [eax + 0x18], ecx
// 00a68780  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarPaintManager.cpp (function ??0?$CList@PAVCXTPCalendarViewPart@@PAV1@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarPaintManager.cpp
