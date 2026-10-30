// roc 2007-03 00431720  unit: seg_00430000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00431720
//
// 00431720  56                   push esi
// 00431721  8bf1                 mov esi, ecx
// 00431723  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 00431729  85c9                 test ecx, ecx
// 0043172b  57                   push edi
// 0043172c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00431730  7406                 je 0x431738
// 00431732  57                   push edi
// 00431733  e8e8ab1f00           call 0x62c320
// 00431738  8b442410             mov eax, dword ptr [esp + 0x10]
// 0043173c  50                   push eax
// 0043173d  57                   push edi
// 0043173e  8bce                 mov ecx, esi
// 00431740  e8b9d01e00           call 0x61e7fe
// 00431745  5f                   pop edi
// 00431746  5e                   pop esi
// 00431747  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPFrameWnd.cpp (function ?OnSetPreviewMode@?$CXTPFrameWndBase@VCMDIFrameWnd@@@@UAEXHPAUCPrintPreviewState@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPFrameWnd.cpp
