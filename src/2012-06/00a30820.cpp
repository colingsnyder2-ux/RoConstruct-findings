// roc 2012-06 00a30820  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a30820
//
// 00a30820  8b01                 mov eax, dword ptr [ecx]
// 00a30822  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 00a30828  ffe2                 jmp edx
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?OnUnderlineActivate@CXTPControl@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
