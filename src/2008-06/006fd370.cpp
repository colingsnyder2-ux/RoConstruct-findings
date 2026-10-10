// roc 2008-06 006fd370  unit: CXTCaptionButtonTheme  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fd370
//
// 006fd370  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fd374  85c9                 test ecx, ecx
// 006fd376  7503                 jne 0x6fd37b
// 006fd378  33c0                 xor eax, eax
// 006fd37a  c3                   ret 
// 006fd37b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006fd37f  8b01                 mov eax, dword ptr [ecx]
// 006fd381  8b4058               mov eax, dword ptr [eax + 0x58]
// 006fd384  6a00                 push 0
// 006fd386  52                   push edx
// 006fd387  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd38b  6a0b                 push 0xb
// 006fd38d  52                   push edx
// 006fd38e  ffd0                 call eax
// 006fd390  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_Bool@@YAHPAVCXTPPropExchange@@PBDAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
