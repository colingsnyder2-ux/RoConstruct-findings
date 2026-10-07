// roc 2011-06 00432080  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00432080
//
// 00432080  56                   push esi
// 00432081  8bf1                 mov esi, ecx
// 00432083  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00432089  57                   push edi
// 0043208a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0043208e  85c9                 test ecx, ecx
// 00432090  7406                 je 0x432098
// 00432092  57                   push edi
// 00432093  e8a88a3f00           call 0x82ab40
// 00432098  8b442410             mov eax, dword ptr [esp + 0x10]
// 0043209c  50                   push eax
// 0043209d  57                   push edi
// 0043209e  8bce                 mov ecx, esi
// 004320a0  e8d9863d00           call 0x80a77e
// 004320a5  5f                   pop edi
// 004320a6  5e                   pop esi
// 004320a7  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPFrameWnd.cpp (function ?OnSetPreviewMode@?$CXTPFrameWndBase@VCMDIFrameWnd@@@@UAEXHPAUCPrintPreviewState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPFrameWnd.cpp
