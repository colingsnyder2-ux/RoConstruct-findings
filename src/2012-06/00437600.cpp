// from server: 100% by auto
// roc 2012-06 00437600  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00437600
//
// 00437600  56                   push esi
// 00437601  8bf1                 mov esi, ecx
// 00437603  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00437609  57                   push edi
// 0043760a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0043760e  85c9                 test ecx, ecx
// 00437610  7406                 je 0x437618
// 00437612  57                   push edi
// 00437613  e8f8ba5600           call 0x9a3110
// 00437618  8b442410             mov eax, dword ptr [esp + 0x10]
// 0043761c  50                   push eax
// 0043761d  57                   push edi
// 0043761e  8bce                 mov ecx, esi
// 00437620  e8d9b15400           call 0x9827fe
// 00437625  5f                   pop edi
// 00437626  5e                   pop esi
// 00437627  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPFrameWnd.cpp (function ?OnSetPreviewMode@?$CXTPFrameWndBase@VCMDIFrameWnd@@@@UAEXHPAUCPrintPreviewState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPFrameWnd.cpp
