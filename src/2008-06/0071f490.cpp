// roc 2008-06 0071f490  unit: CXTPResourceManager  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f490
//
// 0071f490  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0071f494  8b01                 mov eax, dword ptr [ecx]
// 0071f496  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0071f499  52                   push edx
// 0071f49a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0071f49e  52                   push edx
// 0071f49f  0fb754240c           movzx edx, word ptr [esp + 0xc]
// 0071f4a4  52                   push edx
// 0071f4a5  ffd0                 call eax
// 0071f4a7  c20c00               ret 0xc
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?LoadIconA@CXTPResourceManager@@UAEPAUHICON__@@HVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
