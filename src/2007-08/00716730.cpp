// roc 2007-08 00716730  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716730
//
// 00716730  8b4108               mov eax, dword ptr [ecx + 8]
// 00716733  85c0                 test eax, eax
// 00716735  741b                 je 0x716752
// 00716737  33c9                 xor ecx, ecx
// 00716739  394c2404             cmp dword ptr [esp + 4], ecx
// 0071673d  0f94c1               sete cl
// 00716740  8d0c8decffffff       lea ecx, [ecx*4 - 0x14]
// 00716747  51                   push ecx
// 00716748  50                   push eax
// 00716749  ff1534ec7700         call dword ptr [0x77ec34]
// 0071674f  c20400               ret 4
// 00716752  33c0                 xor eax, eax
// 00716754  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetSiteStyle@CXTPOffice2007FrameHook@@IBEKH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPOffice2007FrameHook.cpp
