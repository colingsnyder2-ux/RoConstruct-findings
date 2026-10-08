// from server: 100% by auto
// roc 2012-06 00449080  unit: VCFrameWnd::?$CXTPFrameWndBase  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00449080
//
// 00449080  56                   push esi
// 00449081  8bf1                 mov esi, ecx
// 00449083  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 00449089  57                   push edi
// 0044908a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0044908e  85c9                 test ecx, ecx
// 00449090  7406                 je 0x449098
// 00449092  57                   push edi
// 00449093  e878a05500           call 0x9a3110
// 00449098  8b442410             mov eax, dword ptr [esp + 0x10]
// 0044909c  50                   push eax
// 0044909d  57                   push edi
// 0044909e  8bce                 mov ecx, esi
// 004490a0  e859975300           call 0x9827fe
// 004490a5  5f                   pop edi
// 004490a6  5e                   pop esi
// 004490a7  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPFrameWnd.cpp (function ?OnSetPreviewMode@?$CXTPFrameWndBase@VCFrameWnd@@@@UAEXHPAUCPrintPreviewState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPFrameWnd.cpp
