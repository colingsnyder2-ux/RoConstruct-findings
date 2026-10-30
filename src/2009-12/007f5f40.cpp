// roc 2009-12 007f5f40  unit: CXTPToolTipContext::CHTMLToolTip::XDocHostUIHandler  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5f40
//
// 007f5f40  8bc1                 mov eax, ecx
// 007f5f42  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 007f5f48  85c9                 test ecx, ecx
// 007f5f4a  7405                 je 0x7f5f51
// 007f5f4c  e93fe60000           jmp 0x804590
// 007f5f51  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 007f5f57  85c9                 test ecx, ecx
// 007f5f59  7410                 je 0x7f5f6b
// 007f5f5b  e890f10400           call 0x8450f0
// 007f5f60  85c0                 test eax, eax
// 007f5f62  7407                 je 0x7f5f6b
// 007f5f64  8bc8                 mov ecx, eax
// 007f5f66  e975e70100           jmp 0x8146e0
// 007f5f6b  833da4adb90000       cmp dword ptr [0xb9ada4], 0
// 007f5f72  750a                 jne 0x7f5f7e
// 007f5f74  6a00                 push 0
// 007f5f76  e8e5860000           call 0x7fe660
// 007f5f7b  83c404               add esp, 4
// 007f5f7e  a1a4adb900           mov eax, dword ptr [0xb9ada4]
// 007f5f83  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetPaintManager@CXTPControl@@QBEPAVCXTPPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
