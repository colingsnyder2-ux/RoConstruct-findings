// roc 2008-06 006fd340  unit: CXTCaptionButtonTheme  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fd340
//
// 006fd340  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fd344  85c9                 test ecx, ecx
// 006fd346  7503                 jne 0x6fd34b
// 006fd348  33c0                 xor eax, eax
// 006fd34a  c3                   ret 
// 006fd34b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006fd34f  8b01                 mov eax, dword ptr [ecx]
// 006fd351  8b4058               mov eax, dword ptr [eax + 0x58]
// 006fd354  6a00                 push 0
// 006fd356  52                   push edx
// 006fd357  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd35b  6a03                 push 3
// 006fd35d  52                   push edx
// 006fd35e  ffd0                 call eax
// 006fd360  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Long@@YAHPAVCXTPPropExchange@@PBDAAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
