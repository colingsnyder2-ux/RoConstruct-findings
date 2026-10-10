// roc 2008-06 006fd310  unit: CXTCaptionButtonTheme  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fd310
//
// 006fd310  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fd314  85c9                 test ecx, ecx
// 006fd316  7503                 jne 0x6fd31b
// 006fd318  33c0                 xor eax, eax
// 006fd31a  c3                   ret 
// 006fd31b  8b01                 mov eax, dword ptr [ecx]
// 006fd31d  8b4058               mov eax, dword ptr [eax + 0x58]
// 006fd320  8d542410             lea edx, [esp + 0x10]
// 006fd324  52                   push edx
// 006fd325  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd329  52                   push edx
// 006fd32a  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd32e  6a03                 push 3
// 006fd330  52                   push edx
// 006fd331  ffd0                 call eax
// 006fd333  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Long@@YAHPAVCXTPPropExchange@@PBDAAJJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
