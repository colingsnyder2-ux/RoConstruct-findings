// roc 2009-12 007f5f10  unit: CXTPToolTipContext::CHTMLToolTip::XDocHostUIHandler  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5f10
//
// 007f5f10  8bc1                 mov eax, ecx
// 007f5f12  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 007f5f18  85c9                 test ecx, ecx
// 007f5f1a  7405                 je 0x7f5f21
// 007f5f1c  e9efe60000           jmp 0x804610
// 007f5f21  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 007f5f27  85c9                 test ecx, ecx
// 007f5f29  7410                 je 0x7f5f3b
// 007f5f2b  e8c0f10400           call 0x8450f0
// 007f5f30  85c0                 test eax, eax
// 007f5f32  7407                 je 0x7f5f3b
// 007f5f34  8bc8                 mov ecx, eax
// 007f5f36  e9c5e70100           jmp 0x814700
// 007f5f3b  e970a50100           jmp 0x8104b0
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetImageManager@CXTPControl@@QBEPAVCXTPImageManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
