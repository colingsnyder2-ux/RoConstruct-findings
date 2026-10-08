// roc 2008-06 006aaf80  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aaf80
//
// 006aaf80  8b01                 mov eax, dword ptr [ecx]
// 006aaf82  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 006aaf88  6a00                 push 0
// 006aaf8a  ffd2                 call edx
// 006aaf8c  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ?OnRemoved@CXTPControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
