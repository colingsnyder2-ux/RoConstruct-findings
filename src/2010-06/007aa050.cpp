// roc 2010-06 007aa050  unit: CXTPToolTipContext::CHTMLToolTip::XDocHostUIHandler  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007aa050
//
// 007aa050  8bc1                 mov eax, ecx
// 007aa052  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 007aa058  85c9                 test ecx, ecx
// 007aa05a  7405                 je 0x7aa061
// 007aa05c  e9afe60000           jmp 0x7b8710
// 007aa061  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 007aa067  85c9                 test ecx, ecx
// 007aa069  7410                 je 0x7aa07b
// 007aa06b  e820f10400           call 0x7f9190
// 007aa070  85c0                 test eax, eax
// 007aa072  7407                 je 0x7aa07b
// 007aa074  8bc8                 mov ecx, eax
// 007aa076  e965e70100           jmp 0x7c87e0
// 007aa07b  e9d0a40100           jmp 0x7c4550
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetImageManager@CXTPControl@@QBEPAVCXTPImageManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
