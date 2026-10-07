// roc 2012-06 009f7fd0  unit: CXTPResourceManager  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f7fd0
//
// 009f7fd0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009f7fd4  8b01                 mov eax, dword ptr [ecx]
// 009f7fd6  8b402c               mov eax, dword ptr [eax + 0x2c]
// 009f7fd9  52                   push edx
// 009f7fda  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009f7fde  52                   push edx
// 009f7fdf  0fb754240c           movzx edx, word ptr [esp + 0xc]
// 009f7fe4  52                   push edx
// 009f7fe5  ffd0                 call eax
// 009f7fe7  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?LoadIconA@CXTPResourceManager@@UAEPAUHICON__@@HVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
