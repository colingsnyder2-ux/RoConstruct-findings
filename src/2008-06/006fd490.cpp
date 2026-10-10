// roc 2008-06 006fd490  unit: CXTCaptionButtonTheme  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fd490
//
// 006fd490  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fd494  85c9                 test ecx, ecx
// 006fd496  7503                 jne 0x6fd49b
// 006fd498  33c0                 xor eax, eax
// 006fd49a  c3                   ret 
// 006fd49b  8b01                 mov eax, dword ptr [ecx]
// 006fd49d  8b4058               mov eax, dword ptr [eax + 0x58]
// 006fd4a0  8d542410             lea edx, [esp + 0x10]
// 006fd4a4  52                   push edx
// 006fd4a5  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd4a9  52                   push edx
// 006fd4aa  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd4ae  6a65                 push 0x65
// 006fd4b0  52                   push edx
// 006fd4b1  ffd0                 call eax
// 006fd4b3  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Size@@YAHPAVCXTPPropExchange@@PBDAAUtagSIZE@@U2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
