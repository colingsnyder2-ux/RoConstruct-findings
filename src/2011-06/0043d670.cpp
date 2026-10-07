// roc 2011-06 0043d670  unit: VCFrameWnd::?$CXTPFrameWndBase  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043d670
//
// 0043d670  56                   push esi
// 0043d671  8bf1                 mov esi, ecx
// 0043d673  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 0043d679  57                   push edi
// 0043d67a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0043d67e  85c9                 test ecx, ecx
// 0043d680  7406                 je 0x43d688
// 0043d682  57                   push edi
// 0043d683  e8b8d43e00           call 0x82ab40
// 0043d688  8b442410             mov eax, dword ptr [esp + 0x10]
// 0043d68c  50                   push eax
// 0043d68d  57                   push edi
// 0043d68e  8bce                 mov ecx, esi
// 0043d690  e8e9d03c00           call 0x80a77e
// 0043d695  5f                   pop edi
// 0043d696  5e                   pop esi
// 0043d697  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPFrameWnd.cpp (function ?OnSetPreviewMode@?$CXTPFrameWndBase@VCFrameWnd@@@@UAEXHPAUCPrintPreviewState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPFrameWnd.cpp
