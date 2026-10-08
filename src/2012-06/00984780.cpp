// roc 2012-06 00984780  unit: CRobloxControlColorSelector  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00984780
//
// 00984780  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00984786  85c0                 test eax, eax
// 00984788  7407                 je 0x984791
// 0098478a  8388e800000001       or dword ptr [eax + 0xe8], 1
// 00984791  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?DelayLayoutParent@CXTPControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
