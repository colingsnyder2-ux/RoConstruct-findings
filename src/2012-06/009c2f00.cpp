// from server: 100% by auto
// roc 2012-06 009c2f00  unit: CXTPMDIFrameWnd  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c2f00
//
// 009c2f00  56                   push esi
// 009c2f01  8bf1                 mov esi, ecx
// 009c2f03  e8b2f7fbff           call 0x9826ba
// 009c2f08  c786e800000000000000 mov dword ptr [esi + 0xe8], 0
// 009c2f12  c7063c2bc100         mov dword ptr [esi], 0xc12b3c
// 009c2f18  8bc6                 mov eax, esi
// 009c2f1a  5e                   pop esi
// 009c2f1b  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPFrameWnd.cpp (function ??0?$CXTPFrameWndBase@VCFrameWnd@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPFrameWnd.cpp
