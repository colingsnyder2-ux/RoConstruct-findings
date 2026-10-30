// roc 2009-06 007c8100  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c8100
//
// 007c8100  8b01                 mov eax, dword ptr [ecx]
// 007c8102  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 007c8108  ffe2                 jmp edx
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?OnUnderlineActivate@CXTPControl@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
