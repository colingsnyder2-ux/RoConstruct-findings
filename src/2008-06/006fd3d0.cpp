// roc 2008-06 006fd3d0  unit: CXTCaptionButtonTheme  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fd3d0
//
// 006fd3d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fd3d4  85c9                 test ecx, ecx
// 006fd3d6  7503                 jne 0x6fd3db
// 006fd3d8  33c0                 xor eax, eax
// 006fd3da  c3                   ret 
// 006fd3db  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006fd3df  8b01                 mov eax, dword ptr [ecx]
// 006fd3e1  8b4058               mov eax, dword ptr [eax + 0x58]
// 006fd3e4  6a00                 push 0
// 006fd3e6  52                   push edx
// 006fd3e7  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd3eb  6a1e                 push 0x1e
// 006fd3ed  52                   push edx
// 006fd3ee  ffd0                 call eax
// 006fd3f0  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_String@@YAHPAVCXTPPropExchange@@PBDAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
