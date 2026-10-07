// roc 2008-06 0074ee30  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074ee30
//
// 0074ee30  8b01                 mov eax, dword ptr [ecx]
// 0074ee32  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 0074ee38  ffe2                 jmp edx
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?OnUnderlineActivate@CXTPControl@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
