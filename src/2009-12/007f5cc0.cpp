// roc 2009-12 007f5cc0  unit: CRobloxControlColorSelector  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5cc0
//
// 007f5cc0  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 007f5cc6  85c0                 test eax, eax
// 007f5cc8  7407                 je 0x7f5cd1
// 007f5cca  8388e800000001       or dword ptr [eax + 0xe8], 1
// 007f5cd1  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?DelayLayoutParent@CXTPControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
