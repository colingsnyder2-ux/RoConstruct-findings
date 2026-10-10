// roc 2008-06 006fd4c0  unit: CXTCaptionButtonTheme  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fd4c0
//
// 006fd4c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fd4c4  85c9                 test ecx, ecx
// 006fd4c6  7503                 jne 0x6fd4cb
// 006fd4c8  33c0                 xor eax, eax
// 006fd4ca  c3                   ret 
// 006fd4cb  8b01                 mov eax, dword ptr [ecx]
// 006fd4cd  8b4058               mov eax, dword ptr [eax + 0x58]
// 006fd4d0  8d542410             lea edx, [esp + 0x10]
// 006fd4d4  52                   push edx
// 006fd4d5  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd4d9  52                   push edx
// 006fd4da  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd4de  6a64                 push 0x64
// 006fd4e0  52                   push edx
// 006fd4e1  ffd0                 call eax
// 006fd4e3  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Rect@@YAHPAVCXTPPropExchange@@PBDAAUtagRECT@@U2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
