// roc 2008-06 006fd520  unit: CXTCaptionButtonTheme  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fd520
//
// 006fd520  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fd524  85c9                 test ecx, ecx
// 006fd526  7503                 jne 0x6fd52b
// 006fd528  33c0                 xor eax, eax
// 006fd52a  c3                   ret 
// 006fd52b  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd52f  8b01                 mov eax, dword ptr [ecx]
// 006fd531  8b405c               mov eax, dword ptr [eax + 0x5c]
// 006fd534  52                   push edx
// 006fd535  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd539  52                   push edx
// 006fd53a  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd53e  52                   push edx
// 006fd53f  ffd0                 call eax
// 006fd541  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Blob@@YAHPAVCXTPPropExchange@@PBDAAPAEAAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
