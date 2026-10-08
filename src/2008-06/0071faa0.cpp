// from server: 100% by auto
// roc 2008-06 0071faa0  unit: CXTPResourceManager  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071faa0
//
// 0071faa0  51                   push ecx
// 0071faa1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0071faa5  8d0424               lea eax, [esp]
// 0071faa8  50                   push eax
// 0071faa9  68f0f97100           push 0x71f9f0
// 0071faae  51                   push ecx
// 0071faaf  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0071fab7  ff1520238000         call dword ptr [0x802320]
// 0071fabd  668b0424             mov ax, word ptr [esp]
// 0071fac1  59                   pop ecx
// 0071fac2  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?GetResourceLanguage@CXTPResourceManager@@SAGPAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
