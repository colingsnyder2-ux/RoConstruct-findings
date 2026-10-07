// roc 2007-08 006a8bb0  unit: CXTPRibbonBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a8bb0
//
// 006a8bb0  8b442404             mov eax, dword ptr [esp + 4]
// 006a8bb4  8b5124               mov edx, dword ptr [ecx + 0x24]
// 006a8bb7  8910                 mov dword ptr [eax], edx
// 006a8bb9  8b5128               mov edx, dword ptr [ecx + 0x28]
// 006a8bbc  895004               mov dword ptr [eax + 4], edx
// 006a8bbf  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 006a8bc2  8b4930               mov ecx, dword ptr [ecx + 0x30]
// 006a8bc5  895008               mov dword ptr [eax + 8], edx
// 006a8bc8  89480c               mov dword ptr [eax + 0xc], ecx
// 006a8bcb  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetHeaderRect@CXTPTabManager@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
