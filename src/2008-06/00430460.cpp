// roc 2008-06 00430460  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00430460
//
// 00430460  56                   push esi
// 00430461  8bf1                 mov esi, ecx
// 00430463  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00430469  57                   push edi
// 0043046a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0043046e  85c9                 test ecx, ecx
// 00430470  7406                 je 0x430478
// 00430472  57                   push edi
// 00430473  e898352700           call 0x6a3a10
// 00430478  8b442410             mov eax, dword ptr [esp + 0x10]
// 0043047c  50                   push eax
// 0043047d  57                   push edi
// 0043047e  8bce                 mov ecx, esi
// 00430480  e833092700           call 0x6a0db8
// 00430485  5f                   pop edi
// 00430486  5e                   pop esi
// 00430487  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPFrameWnd.cpp (function ?OnSetPreviewMode@?$CXTPFrameWndBase@VCMDIFrameWnd@@@@UAEXHPAUCPrintPreviewState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPFrameWnd.cpp
