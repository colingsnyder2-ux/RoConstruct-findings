// roc 2010-06 007a9dc0  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a9dc0
//
// 007a9dc0  8b01                 mov eax, dword ptr [ecx]
// 007a9dc2  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 007a9dc8  6a00                 push 0
// 007a9dca  ffd2                 call edx
// 007a9dcc  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ?OnRemoved@CXTPControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
