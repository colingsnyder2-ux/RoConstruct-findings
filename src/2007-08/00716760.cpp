// from server: 100% by auto
// roc 2007-08 00716760  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716760
//
// 00716760  8bc1                 mov eax, ecx
// 00716762  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00716765  85c9                 test ecx, ecx
// 00716767  7405                 je 0x71676e
// 00716769  e962baf1ff           jmp 0x6321d0
// 0071676e  8b4014               mov eax, dword ptr [eax + 0x14]
// 00716771  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetPaintManager@CXTPOffice2007FrameHook@@QBEPAVCXTPOffice2007Theme@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPOffice2007FrameHook.cpp
