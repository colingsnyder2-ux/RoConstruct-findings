// roc 2011-06 008f84d0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f84d0
//
// 008f84d0  8b4108               mov eax, dword ptr [ecx + 8]
// 008f84d3  85c0                 test eax, eax
// 008f84d5  741b                 je 0x8f84f2
// 008f84d7  33c9                 xor ecx, ecx
// 008f84d9  394c2404             cmp dword ptr [esp + 4], ecx
// 008f84dd  0f94c1               sete cl
// 008f84e0  8d0c8decffffff       lea ecx, [ecx*4 - 0x14]
// 008f84e7  51                   push ecx
// 008f84e8  50                   push eax
// 008f84e9  ff15981ca400         call dword ptr [0xa41c98]
// 008f84ef  c20400               ret 4
// 008f84f2  33c0                 xor eax, eax
// 008f84f4  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetSiteStyle@CXTPOffice2007FrameHook@@IBEKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
