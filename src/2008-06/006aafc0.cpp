// from server: 100% by auto
// roc 2008-06 006aafc0  unit: CRobloxControlColorSelector  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aafc0
//
// 006aafc0  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 006aafc6  85c0                 test eax, eax
// 006aafc8  7407                 je 0x6aafd1
// 006aafca  8388e800000001       or dword ptr [eax + 0xe8], 1
// 006aafd1  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?DelayLayoutParent@CXTPControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
