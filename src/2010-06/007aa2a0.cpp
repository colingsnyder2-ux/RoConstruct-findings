// roc 2010-06 007aa2a0  unit: CRobloxControlColorSelector  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007aa2a0
//
// 007aa2a0  8b01                 mov eax, dword ptr [ecx]
// 007aa2a2  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 007aa2a8  ffe2                 jmp edx
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ?OnUnderlineActivate@CXTPControl@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
