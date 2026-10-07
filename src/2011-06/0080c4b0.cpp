// roc 2011-06 0080c4b0  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080c4b0
//
// 0080c4b0  8b01                 mov eax, dword ptr [ecx]
// 0080c4b2  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0080c4b8  6a00                 push 0
// 0080c4ba  ffd2                 call edx
// 0080c4bc  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ?OnRemoved@CXTPControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
