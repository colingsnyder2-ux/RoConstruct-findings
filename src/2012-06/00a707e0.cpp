// roc 2012-06 00a707e0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a707e0
//
// 00a707e0  8b4108               mov eax, dword ptr [ecx + 8]
// 00a707e3  85c0                 test eax, eax
// 00a707e5  741b                 je 0xa70802
// 00a707e7  33c9                 xor ecx, ecx
// 00a707e9  394c2404             cmp dword ptr [esp + 4], ecx
// 00a707ed  0f94c1               sete cl
// 00a707f0  8d0c8decffffff       lea ecx, [ecx*4 - 0x14]
// 00a707f7  51                   push ecx
// 00a707f8  50                   push eax
// 00a707f9  ff15bc3ab200         call dword ptr [0xb23abc]
// 00a707ff  c20400               ret 4
// 00a70802  33c0                 xor eax, eax
// 00a70804  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetSiteStyle@CXTPOffice2007FrameHook@@IBEKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
