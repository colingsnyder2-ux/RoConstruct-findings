// roc 2011-06 008f8500  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f8500
//
// 008f8500  8bc1                 mov eax, ecx
// 008f8502  8b4810               mov ecx, dword ptr [eax + 0x10]
// 008f8505  85c9                 test ecx, ecx
// 008f8507  7405                 je 0x8f850e
// 008f8509  e9221df3ff           jmp 0x82a230
// 008f850e  8b4014               mov eax, dword ptr [eax + 0x14]
// 008f8511  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetPaintManager@CXTPOffice2007FrameHook@@QBEPAVCXTPOffice2007Theme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
