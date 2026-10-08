// roc 2010-06 007a9e00  unit: CRobloxControlColorSelector  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a9e00
//
// 007a9e00  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 007a9e06  85c0                 test eax, eax
// 007a9e08  7407                 je 0x7a9e11
// 007a9e0a  8388e800000001       or dword ptr [eax + 0xe8], 1
// 007a9e11  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?DelayLayoutParent@CXTPControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
