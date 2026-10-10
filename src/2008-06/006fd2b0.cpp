// roc 2008-06 006fd2b0  unit: CXTCaptionButtonTheme  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fd2b0
//
// 006fd2b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fd2b4  85c9                 test ecx, ecx
// 006fd2b6  7503                 jne 0x6fd2bb
// 006fd2b8  33c0                 xor eax, eax
// 006fd2ba  c3                   ret 
// 006fd2bb  8b01                 mov eax, dword ptr [ecx]
// 006fd2bd  8b4058               mov eax, dword ptr [eax + 0x58]
// 006fd2c0  8d542410             lea edx, [esp + 0x10]
// 006fd2c4  52                   push edx
// 006fd2c5  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd2c9  52                   push edx
// 006fd2ca  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd2ce  6a11                 push 0x11
// 006fd2d0  52                   push edx
// 006fd2d1  ffd0                 call eax
// 006fd2d3  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Byte@@YAHPAVCXTPPropExchange@@PBDAAEE@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
