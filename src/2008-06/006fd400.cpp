// roc 2008-06 006fd400  unit: CXTCaptionButtonTheme  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fd400
//
// 006fd400  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fd404  85c9                 test ecx, ecx
// 006fd406  7503                 jne 0x6fd40b
// 006fd408  33c0                 xor eax, eax
// 006fd40a  c3                   ret 
// 006fd40b  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd40f  8b01                 mov eax, dword ptr [ecx]
// 006fd411  8b4058               mov eax, dword ptr [eax + 0x58]
// 006fd414  52                   push edx
// 006fd415  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd419  52                   push edx
// 006fd41a  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd41e  6a1e                 push 0x1e
// 006fd420  52                   push edx
// 006fd421  ffd0                 call eax
// 006fd423  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_String@@YAHPAVCXTPPropExchange@@PBDAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
