// roc 2010-06 0089f950  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089f950
//
// 0089f950  8b4108               mov eax, dword ptr [ecx + 8]
// 0089f953  85c0                 test eax, eax
// 0089f955  741b                 je 0x89f972
// 0089f957  33c9                 xor ecx, ecx
// 0089f959  394c2404             cmp dword ptr [esp + 4], ecx
// 0089f95d  0f94c1               sete cl
// 0089f960  8d0c8decffffff       lea ecx, [ecx*4 - 0x14]
// 0089f967  51                   push ecx
// 0089f968  50                   push eax
// 0089f969  ff15fcbb9e00         call dword ptr [0x9ebbfc]
// 0089f96f  c20400               ret 4
// 0089f972  33c0                 xor eax, eax
// 0089f974  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetSiteStyle@CXTPOffice2007FrameHook@@IBEKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
