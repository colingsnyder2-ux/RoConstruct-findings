// from server: 100% by auto
// roc 2011-06 0087fa20  unit: CXTPResourceManager  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087fa20
//
// 0087fa20  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0087fa24  8b01                 mov eax, dword ptr [ecx]
// 0087fa26  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0087fa29  52                   push edx
// 0087fa2a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0087fa2e  52                   push edx
// 0087fa2f  0fb754240c           movzx edx, word ptr [esp + 0xc]
// 0087fa34  52                   push edx
// 0087fa35  ffd0                 call eax
// 0087fa37  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?LoadIconA@CXTPResourceManager@@UAEPAUHICON__@@HVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
