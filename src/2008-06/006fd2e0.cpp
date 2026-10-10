// roc 2008-06 006fd2e0  unit: CXTCaptionButtonTheme  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fd2e0
//
// 006fd2e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fd2e4  85c9                 test ecx, ecx
// 006fd2e6  7503                 jne 0x6fd2eb
// 006fd2e8  33c0                 xor eax, eax
// 006fd2ea  c3                   ret 
// 006fd2eb  8b01                 mov eax, dword ptr [ecx]
// 006fd2ed  8b4058               mov eax, dword ptr [eax + 0x58]
// 006fd2f0  8d542410             lea edx, [esp + 0x10]
// 006fd2f4  52                   push edx
// 006fd2f5  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd2f9  52                   push edx
// 006fd2fa  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd2fe  6a02                 push 2
// 006fd300  52                   push edx
// 006fd301  ffd0                 call eax
// 006fd303  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Short@@YAHPAVCXTPPropExchange@@PBDAAFF@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
