// roc 2008-06 006fd3a0  unit: CXTCaptionButtonTheme  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fd3a0
//
// 006fd3a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fd3a4  85c9                 test ecx, ecx
// 006fd3a6  7503                 jne 0x6fd3ab
// 006fd3a8  33c0                 xor eax, eax
// 006fd3aa  c3                   ret 
// 006fd3ab  8b01                 mov eax, dword ptr [ecx]
// 006fd3ad  8b4058               mov eax, dword ptr [eax + 0x58]
// 006fd3b0  8d542410             lea edx, [esp + 0x10]
// 006fd3b4  52                   push edx
// 006fd3b5  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd3b9  52                   push edx
// 006fd3ba  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd3be  6a0b                 push 0xb
// 006fd3c0  52                   push edx
// 006fd3c1  ffd0                 call eax
// 006fd3c3  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Bool@@YAHPAVCXTPPropExchange@@PBDAAHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
