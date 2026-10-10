// roc 2008-06 006fd430  unit: CXTCaptionButtonTheme  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fd430
//
// 006fd430  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fd434  85c9                 test ecx, ecx
// 006fd436  7503                 jne 0x6fd43b
// 006fd438  33c0                 xor eax, eax
// 006fd43a  c3                   ret 
// 006fd43b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006fd43f  8b01                 mov eax, dword ptr [ecx]
// 006fd441  8b4058               mov eax, dword ptr [eax + 0x58]
// 006fd444  6a00                 push 0
// 006fd446  52                   push edx
// 006fd447  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd44b  6a05                 push 5
// 006fd44d  52                   push edx
// 006fd44e  ffd0                 call eax
// 006fd450  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Double@@YAHPAVCXTPPropExchange@@PBDAAN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
