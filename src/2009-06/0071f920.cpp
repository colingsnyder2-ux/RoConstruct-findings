// roc 2009-06 0071f920  unit: CXTPToolTipContext::CHTMLToolTip::XDocHostUIHandler  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071f920
//
// 0071f920  8bc1                 mov eax, ecx
// 0071f922  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0071f928  85c9                 test ecx, ecx
// 0071f92a  7405                 je 0x71f931
// 0071f92c  e91fdb0000           jmp 0x72d450
// 0071f931  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 0071f937  85c9                 test ecx, ecx
// 0071f939  7410                 je 0x71f94b
// 0071f93b  e8e0a90400           call 0x76a320
// 0071f940  85c0                 test eax, eax
// 0071f942  7407                 je 0x71f94b
// 0071f944  8bc8                 mov ecx, eax
// 0071f946  e9b5a00000           jmp 0x729a00
// 0071f94b  833d4419a50000       cmp dword ptr [0xa51944], 0
// 0071f952  750a                 jne 0x71f95e
// 0071f954  6a00                 push 0
// 0071f956  e8653e0000           call 0x7237c0
// 0071f95b  83c404               add esp, 4
// 0071f95e  a14419a500           mov eax, dword ptr [0xa51944]
// 0071f963  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetPaintManager@CXTPControl@@QBEPAVCXTPPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
