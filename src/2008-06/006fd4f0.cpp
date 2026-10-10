// roc 2008-06 006fd4f0  unit: CXTCaptionButtonTheme  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fd4f0
//
// 006fd4f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fd4f4  85c9                 test ecx, ecx
// 006fd4f6  7503                 jne 0x6fd4fb
// 006fd4f8  33c0                 xor eax, eax
// 006fd4fa  c3                   ret 
// 006fd4fb  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd4ff  8b01                 mov eax, dword ptr [ecx]
// 006fd501  8b4060               mov eax, dword ptr [eax + 0x60]
// 006fd504  52                   push edx
// 006fd505  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd509  52                   push edx
// 006fd50a  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd50e  52                   push edx
// 006fd50f  ffd0                 call eax
// 006fd511  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?PX_RuntimeClass@@YAHPAVCXTPPropExchange@@PBDAAPAUCRuntimeClass@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
