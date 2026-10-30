// roc 2010-06 0089f980  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089f980
//
// 0089f980  8bc1                 mov eax, ecx
// 0089f982  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0089f985  85c9                 test ecx, ecx
// 0089f987  7405                 je 0x89f98e
// 0089f989  e9328ef2ff           jmp 0x7c87c0
// 0089f98e  8b4014               mov eax, dword ptr [eax + 0x14]
// 0089f991  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetPaintManager@CXTPOffice2007FrameHook@@QBEPAVCXTPOffice2007Theme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
