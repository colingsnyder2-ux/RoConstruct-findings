// roc 2007-03 006e59e0  unit: seg_006e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e59e0
//
// 006e59e0  8b01                 mov eax, dword ptr [ecx]
// 006e59e2  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006e59e5  ffd2                 call edx
// 006e59e7  8b403c               mov eax, dword ptr [eax + 0x3c]
// 006e59ea  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?IsDrawStaticFrame@CXTPTabManager@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
