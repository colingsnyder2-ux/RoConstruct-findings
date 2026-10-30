// roc 2012-06 00a70810  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a70810
//
// 00a70810  8bc1                 mov eax, ecx
// 00a70812  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00a70815  85c9                 test ecx, ecx
// 00a70817  7405                 je 0xa7081e
// 00a70819  e94220f3ff           jmp 0x9a2860
// 00a7081e  8b4014               mov eax, dword ptr [eax + 0x14]
// 00a70821  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetPaintManager@CXTPOffice2007FrameHook@@QBEPAVCXTPOffice2007Theme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
