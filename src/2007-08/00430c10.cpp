// roc 2007-08 00430c10  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00430c10
//
// 00430c10  56                   push esi
// 00430c11  8bf1                 mov esi, ecx
// 00430c13  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 00430c19  85c9                 test ecx, ecx
// 00430c1b  57                   push edi
// 00430c1c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00430c20  7406                 je 0x430c28
// 00430c22  57                   push edi
// 00430c23  e8d81f2000           call 0x632c00
// 00430c28  8b442410             mov eax, dword ptr [esp + 0x10]
// 00430c2c  50                   push eax
// 00430c2d  57                   push edi
// 00430c2e  8bce                 mov ecx, esi
// 00430c30  e835f71f00           call 0x63036a
// 00430c35  5f                   pop edi
// 00430c36  5e                   pop esi
// 00430c37  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPFrameWnd.cpp (function ?OnSetPreviewMode@?$CXTPFrameWndBase@VCMDIFrameWnd@@@@UAEXHPAUCPrintPreviewState@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPFrameWnd.cpp
