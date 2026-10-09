// roc 2007-03 00433f60  unit: seg_00430000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00433f60
//
// 00433f60  56                   push esi
// 00433f61  8bf1                 mov esi, ecx
// 00433f63  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00433f69  85c9                 test ecx, ecx
// 00433f6b  57                   push edi
// 00433f6c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00433f70  7406                 je 0x433f78
// 00433f72  57                   push edi
// 00433f73  e8a8831f00           call 0x62c320
// 00433f78  8b442410             mov eax, dword ptr [esp + 0x10]
// 00433f7c  50                   push eax
// 00433f7d  57                   push edi
// 00433f7e  8bce                 mov ecx, esi
// 00433f80  e879a81e00           call 0x61e7fe
// 00433f85  5f                   pop edi
// 00433f86  5e                   pop esi
// 00433f87  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPFrameWnd.cpp (function ?OnSetPreviewMode@?$CXTPFrameWndBase@VCFrameWnd@@@@UAEXHPAUCPrintPreviewState@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPFrameWnd.cpp
