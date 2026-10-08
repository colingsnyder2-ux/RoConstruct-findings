// roc 2010-06 007aa080  unit: CXTPToolTipContext::CHTMLToolTip::XDocHostUIHandler  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007aa080
//
// 007aa080  8bc1                 mov eax, ecx
// 007aa082  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 007aa088  85c9                 test ecx, ecx
// 007aa08a  7405                 je 0x7aa091
// 007aa08c  e9ffe50000           jmp 0x7b8690
// 007aa091  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 007aa097  85c9                 test ecx, ecx
// 007aa099  7410                 je 0x7aa0ab
// 007aa09b  e8f0f00400           call 0x7f9190
// 007aa0a0  85c0                 test eax, eax
// 007aa0a2  7407                 je 0x7aa0ab
// 007aa0a4  8bc8                 mov ecx, eax
// 007aa0a6  e915e70100           jmp 0x7c87c0
// 007aa0ab  833db054c20000       cmp dword ptr [0xc254b0], 0
// 007aa0b2  750a                 jne 0x7aa0be
// 007aa0b4  6a00                 push 0
// 007aa0b6  e8b5400000           call 0x7ae170
// 007aa0bb  83c404               add esp, 4
// 007aa0be  a1b054c200           mov eax, dword ptr [0xc254b0]
// 007aa0c3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetPaintManager@CXTPControl@@QBEPAVCXTPPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
