// from server: 100% by auto
// roc 2008-06 00433210  unit: CBrowserFrameWnd  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433210
//
// 00433210  56                   push esi
// 00433211  8bf1                 mov esi, ecx
// 00433213  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 00433219  57                   push edi
// 0043321a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0043321e  85c9                 test ecx, ecx
// 00433220  7406                 je 0x433228
// 00433222  57                   push edi
// 00433223  e8e8072700           call 0x6a3a10
// 00433228  8b442410             mov eax, dword ptr [esp + 0x10]
// 0043322c  50                   push eax
// 0043322d  57                   push edi
// 0043322e  8bce                 mov ecx, esi
// 00433230  e883db2600           call 0x6a0db8
// 00433235  5f                   pop edi
// 00433236  5e                   pop esi
// 00433237  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPFrameWnd.cpp (function ?OnSetPreviewMode@?$CXTPFrameWndBase@VCFrameWnd@@@@UAEXHPAUCPrintPreviewState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPFrameWnd.cpp
