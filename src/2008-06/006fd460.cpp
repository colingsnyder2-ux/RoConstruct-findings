// roc 2008-06 006fd460  unit: CXTCaptionButtonTheme  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fd460
//
// 006fd460  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fd464  85c9                 test ecx, ecx
// 006fd466  7503                 jne 0x6fd46b
// 006fd468  33c0                 xor eax, eax
// 006fd46a  c3                   ret 
// 006fd46b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006fd46f  8b01                 mov eax, dword ptr [ecx]
// 006fd471  8b4058               mov eax, dword ptr [eax + 0x58]
// 006fd474  6a00                 push 0
// 006fd476  52                   push edx
// 006fd477  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd47b  6a07                 push 7
// 006fd47d  52                   push edx
// 006fd47e  ffd0                 call eax
// 006fd480  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_DateTime@@YAHPAVCXTPPropExchange@@PBDAAVCOleDateTime@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
