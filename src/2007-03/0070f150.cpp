// roc 2007-03 0070f150  unit: seg_00700000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070f150
//
// 0070f150  8bc1                 mov eax, ecx
// 0070f152  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0070f155  85c9                 test ecx, ecx
// 0070f157  7405                 je 0x70f15e
// 0070f159  e902c8f1ff           jmp 0x62b960
// 0070f15e  8b4014               mov eax, dword ptr [eax + 0x14]
// 0070f161  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetPaintManager@CXTPOffice2007FrameHook@@QBEPAVCXTPOffice2007Theme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
