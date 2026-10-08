// from server: 100% by auto
// roc 2007-08 00433fa0  unit: CBrowserFrameWnd  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00433fa0
//
// 00433fa0  56                   push esi
// 00433fa1  8bf1                 mov esi, ecx
// 00433fa3  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00433fa9  85c9                 test ecx, ecx
// 00433fab  57                   push edi
// 00433fac  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00433fb0  7406                 je 0x433fb8
// 00433fb2  57                   push edi
// 00433fb3  e848ec1f00           call 0x632c00
// 00433fb8  8b442410             mov eax, dword ptr [esp + 0x10]
// 00433fbc  50                   push eax
// 00433fbd  57                   push edi
// 00433fbe  8bce                 mov ecx, esi
// 00433fc0  e8a5c31f00           call 0x63036a
// 00433fc5  5f                   pop edi
// 00433fc6  5e                   pop esi
// 00433fc7  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPFrameWnd.cpp (function ?OnSetPreviewMode@?$CXTPFrameWndBase@VCFrameWnd@@@@UAEXHPAUCPrintPreviewState@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPFrameWnd.cpp
