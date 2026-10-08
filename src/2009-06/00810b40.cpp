// roc 2009-06 00810b40  unit: CXTPScrollBase  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00810b40
//
// 00810b40  8bc1                 mov eax, ecx
// 00810b42  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00810b45  85c9                 test ecx, ecx
// 00810b47  7405                 je 0x810b4e
// 00810b49  e9b28ef1ff           jmp 0x729a00
// 00810b4e  8b4014               mov eax, dword ptr [eax + 0x14]
// 00810b51  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetPaintManager@CXTPOffice2007FrameHook@@QBEPAVCXTPOffice2007Theme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
