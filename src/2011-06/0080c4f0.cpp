// roc 2011-06 0080c4f0  unit: CRobloxControlColorSelector  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080c4f0
//
// 0080c4f0  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0080c4f6  85c0                 test eax, eax
// 0080c4f8  7407                 je 0x80c501
// 0080c4fa  8388e800000001       or dword ptr [eax + 0xe8], 1
// 0080c501  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?DelayLayoutParent@CXTPControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
