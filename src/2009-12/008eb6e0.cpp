// roc 2009-12 008eb6e0  unit: CXTPScrollBase  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eb6e0
//
// 008eb6e0  8bc1                 mov eax, ecx
// 008eb6e2  8b4810               mov ecx, dword ptr [eax + 0x10]
// 008eb6e5  85c9                 test ecx, ecx
// 008eb6e7  7405                 je 0x8eb6ee
// 008eb6e9  e9f28ff2ff           jmp 0x8146e0
// 008eb6ee  8b4014               mov eax, dword ptr [eax + 0x14]
// 008eb6f1  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetPaintManager@CXTPOffice2007FrameHook@@QBEPAVCXTPOffice2007Theme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
