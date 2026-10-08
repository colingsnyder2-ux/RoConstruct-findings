// roc 2009-06 0071f8f0  unit: CXTPToolTipContext::CHTMLToolTip::XDocHostUIHandler  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071f8f0
//
// 0071f8f0  8bc1                 mov eax, ecx
// 0071f8f2  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0071f8f8  85c9                 test ecx, ecx
// 0071f8fa  7405                 je 0x71f901
// 0071f8fc  e9cfdb0000           jmp 0x72d4d0
// 0071f901  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 0071f907  85c9                 test ecx, ecx
// 0071f909  7410                 je 0x71f91b
// 0071f90b  e810aa0400           call 0x76a320
// 0071f910  85c0                 test eax, eax
// 0071f912  7407                 je 0x71f91b
// 0071f914  8bc8                 mov ecx, eax
// 0071f916  e905a10000           jmp 0x729a20
// 0071f91b  e9a09a0100           jmp 0x7393c0
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetImageManager@CXTPControl@@QBEPAVCXTPImageManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
