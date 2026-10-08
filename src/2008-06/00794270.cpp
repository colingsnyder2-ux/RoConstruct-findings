// from server: 100% by auto
// roc 2008-06 00794270  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00794270
//
// 00794270  8bc1                 mov eax, ecx
// 00794272  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00794275  85c9                 test ecx, ecx
// 00794277  7405                 je 0x79427e
// 00794279  e9e2ecf0ff           jmp 0x6a2f60
// 0079427e  8b4014               mov eax, dword ptr [eax + 0x14]
// 00794281  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetPaintManager@CXTPOffice2007FrameHook@@QBEPAVCXTPOffice2007Theme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
