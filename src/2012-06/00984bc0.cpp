// roc 2012-06 00984bc0  unit: CRobloxControlColorSelector  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00984bc0
//
// 00984bc0  8b01                 mov eax, dword ptr [ecx]
// 00984bc2  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 00984bc8  ffe2                 jmp edx
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ?OnUnderlineActivate@CXTPControl@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
